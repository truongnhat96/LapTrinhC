#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct oto oto;
typedef struct node node;

struct oto{
	int maxe;
	char ten[50];
	float cost;
};

struct node{
    oto data;
	node *next;	
};

node *mknode(oto tt){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data.maxe = tt.maxe;
	strcpy(newnode->data.ten,tt.ten);
	newnode->data.cost = tt.cost;
	newnode->next = NULL;
}

void push_back(node **head,oto tt){
	node *tmp = *head;
	node *newnode= mknode(tt);
	if(*head == NULL){
		*head = newnode;
		return;
	}
	while(tmp->next !=NULL){
	tmp=tmp->next;
	}
	tmp->next = newnode;
}

void input(node **head,int n){
	for(int i=0;i<n;i++){
		oto tt;
		scanf("%d",&tt.maxe);
		getchar();
		gets(tt.ten);
		scanf("%f",&tt.cost);
		push_back(head,tt);
	}
}

void output(node *head){
	while(head!=NULL){
		printf("Ma xe: %d\n",head->data.maxe);
		printf("Ten xe: %s\n",head->data.ten);
		printf("Gia tien: %.2f\n",head->data.cost);
		head=head->next;
	}
}

void erase(node **head,int k){
	if(*head==NULL)
		return;
		node *tmp= *head;
	if(k==1){
		*head= (*head)->next;
		free(tmp);
		return;
	}
	for(int i=1;i<=k-2;i++){
		tmp = tmp->next;
	}
	node *last=tmp->next;
	tmp->next = last->next;
	free(last);
}

void xoa(node **head,int code){
	int k=1;
	node *tmp=*head;
	while(tmp!=NULL){
		if(tmp->data.maxe==code){
			erase(head,k);
			break;
		}
		++k;
		  tmp=tmp->next;
	}
}

int main(){
	node *head=NULL;
	int n;
	scanf("%d",&n);
	if(n>0 && n<50){
		input(&head,n);
		output(head);
		int code;
		printf("Nhap ma xe: ");
		scanf("%d",&code);
	    xoa(&head,code);
		output(head);
	}else printf("KHONG THOA MAN DIEU KIEN");
}