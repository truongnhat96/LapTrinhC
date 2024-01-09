#include <bits/stdc++.h>
using namespace std;

struct da{
	 int ms;
	 string ten;
	 string lop;
	 int khoa; 
};

struct node{
    da data;
	node *next;	
};

int size(node *head){
	int cnt=0;
	 while(head !=NULL){
	 	++cnt;
	 	head=head->next;
	 }
	 return cnt;
}

node *mknode(da tt){
	 node *newnode = new node;
	 newnode->data.ms = tt.ms;
	 newnode->data.ten = tt.ten;
	 newnode->data.lop = tt.lop;
	 newnode->data.khoa = tt.khoa;
	 newnode->next = NULL;
	 return newnode;
}

void push_back(node **head,da tt){
	node *newnode = mknode(tt);
	node *tmp = *head;
	if(*head == NULL){
		*head = newnode;
		return;
	}
	while(tmp->next != NULL){
		 tmp = tmp->next;
	}
	tmp->next = newnode;
}
void input(node **head){
	da tt;
	cin >> tt.ms;
	cin.ignore();
	getline(cin,tt.ten);
	getline(cin,tt.lop);
	cin >> tt.khoa;
	push_back(head,tt);
}

void insert(node **head,da tt,int k){
	 int n = size(*head);
	 if(k<1 && k>n+1){
	 	cout << "KHONG HOP LE!";
	 	return;
	 }
	 if(k==1){
	 	push_back(head,tt);
	 	return;
	 }
	 node *newnode = mknode(tt);
	 node *tmp = *head;
	 for(int i=1;i<=k-2;i++){
	 	tmp=tmp->next;
	 }
	 newnode->next = tmp->next;
	 tmp->next = newnode;
}

void pop_front(node **head){
	if(*head==NULL)  return;
	 node *tmp = *head;
	 tmp->next =NULL;
	 delete tmp;
}

void erase(node **head,int k){
	 if(*head == NULL) return;
	 int n=size(*head);
	 if(k<1 && k>n+1){
	 	cout << "KHONG HOP LE!";
	 	return;
	 }
	 if(k==1){
	 	pop_front(head);
	 	return;
	 }
	 node *tmp= *head;
	 for(int i=1;i<=k-2;i++){
	 	 tmp = tmp->next;
	 }
	 node *last = tmp->next;
	 tmp->next = last->next;
	 delete last;
}

void in(node *head){
	while(head!= NULL){
		if(head->data.ten == "Nguyen Thi Thuy Linh")
		cout << head->data.ms << ' ' << head->data.ten << ' ' << head->data.lop << ' ' << head->data.khoa << endl;
		head= head->next;
	}
}

void output(node *head){
	while(head!= NULL){
		cout << head->data.ms << ' ' << head->data.ten << ' ' << head->data.lop << ' ' << head->data.khoa << endl;
		head= head->next;
	}
}

int main(){    
    node *head = NULL;
    cout << "Nhap 1 de NHAP thong tin cho do an sinh vien" << endl;
    	cout << "Nhap 2 de in ra thong tin do an cua toan bo sinh vien" << endl;
    	cout << "Nhap 3 de in ra thong tin cua sinh vien Nguyen Thi Thuy Linh" << endl;
    	cout << "Nhap 4 de chen mot do an moi vao sau do an co ma 18091" << endl;
    	cout << "Nhap 5 de xoa mot do an o vi tri thu 10" << endl;
    while(1){
    	cout << "Nhap lua chon: ";
    	int lc;
    	cin >> lc;
    	if(lc==1){
    		input(&head);
		}else if(lc==2){
			output(head);
		}else if(lc==3){
			in(head);
		}else if(lc==4){
			cout << "Vi tri sau do an co ma 18091 la: ";
			int k;
			cin >> k;
			cout << endl;
			cout << "Nhap thong tin do an muon chen: " << endl;
			da tt;
	        cin >> tt.ms;
        	cin.ignore();
	      getline(cin,tt.ten);
	      getline(cin,tt.lop);
	      cin >> tt.khoa;
	      cout << "Do an moi da duoc chen vao sau do an co ma 18091!" << endl;
	      insert(&head,tt,k);
		}else if(lc==5){
			erase(&head,10);
			cout << "Da xoa mot do an o vi tri thu 10!" << endl;
		}
	}
}