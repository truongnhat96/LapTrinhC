#include <bits/stdc++.h>
using namespace std;

struct da{
	 int ms;
	 string ten;
	 float diem;
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
	 newnode->data.diem = tt.diem;
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
void input(node **head,int n){
	for(int i=0;i<n;i++){
	da tt;
	cin >> tt.ms;
	cin.ignore();
	getline(cin,tt.ten);
	cin >> tt.diem;
	push_back(head,tt);
    }
}

void xeploai(node *head){
	while(head!= NULL){
		cout << head->data.ms << ' ' << head->data.ten << ' ' << head->data.diem << endl;
		if(head->data.diem<5) cout << "Hoc luc yeu" <<  endl;
		else if(head->data.diem >=5 && head->data.diem<6.5) cout << "hoc luc trung binh" << endl;
		else if(head->data.diem >=6.5 && head->data.diem <8) cout << "hoc luc kha" << endl;
		else if(head->data.diem >=8 && head->data.diem <=10) cout << "hoc luc gioi" << endl;
		head= head->next;
	}
}

void thongke(node *head){
	int y=0,tb=0,k=0,g=0;
	while(head!= NULL){
		if(head->data.diem<5) ++y;
		else if(head->data.diem >=5 && head->data.diem<6.5) ++tb;
		else if(head->data.diem >=6.5 && head->data.diem <8) ++k;
		else if(head->data.diem >=8 && head->data.diem <=10) ++g;
		head= head->next;
	}
	cout << "hoc luc yeu: " << y << endl;
	cout << "hoc luc trung binh: " << tb << endl;
	cout << "hoc luc kha: " << k << endl;
	cout << "hoc luc gioi: " << g << endl;
}

void output(node *head){
	while(head!= NULL){
		cout << head->data.ms << ' ' << head->data.ten << ' ' << head->data.diem << endl;
		head= head->next;
	}
}

void timkiem(node *head){
	int max = -1,min = 11;
	da svmax,svmin;
	while(head!= NULL){
		if(head->data.diem>max){
			max=head->data.diem;
			svmax=head->data;
		} 
		if(head->data.diem<min){
			min=head->data.diem;
			svmin=head->data;
		}
		head= head->next;
	}
	cout << "thong tin sinh vien co diem cao nhat: " << endl;
	cout << svmax.ms << ' ' << svmax.ten << ' ' << svmax.diem << endl;
	cout << "thong tin sinh vien co diem thap nhat: " << endl;
	cout << svmin.ms << ' ' << svmin.ten << ' ' << svmin.diem << endl;
}

void sort(node **head){
	 for(node *i = *head;i!= NULL;i=i->next){
	 	 node *max = i;
	 	 for(node *j = i->next;j!=NULL;j=j->next){
	 	 	   if(max->data.diem < j->data.diem)
	 	 	    max = j;
		  }
		  da tmp = max->data; 
		  max->data=i->data;
		  i->data=tmp;
	 }
}

int main(){    
    node *head = NULL;
        cout << "-------------------MENU-------------------" << endl;
        cout << "Nhap 1 de NHAP thong tin cho sinh vien" << endl;
    	cout << "Nhap 2 de xep loai hoc luc cho sinh vien" << endl;
    	cout << "Nhap 3 de thong ke so luong sinh vien theo hoc luc" << endl;
    	cout << "Nhap 4 tim sinh vien co diem cao nhat, thap nhat" << endl;
    	cout << "Nhap 5 de sap xep danh sach theo diem giam dan" << endl;
    	cout << "Nhap 6 de in ra toan bo sinh vien" << endl;
    	cout << "Nhap 7 de ket thuc chuong trinh" << endl;
    while(1){
    	cout << "Nhap lua chon: ";
    	int lc;
    	cin >> lc;
    	cin.ignore();
    	if(lc==1){
    		int n;
    		cin >> n;
    		cin.ignore();
    		input(&head,n);
		}else if(lc==2){
		  xeploai(head);
		}else if(lc==3){
			thongke(head);
		}else if(lc==4){
		    timkiem(head);
		}else if(lc==5){
		    sort(&head);
		}else if(lc==6){
			output(head);
		}else if(lc==7){
			break;
		}
	}
}