#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sv sv;
typedef struct node node;

struct sv{
	int msv;
	char ten[50];
	float diem;
};

struct node{
	sv data;
	node *next;
};

node *mknode(sv tt){
	node *newnode =(node*)malloc(sizeof(node));
	newnode->data.msv=tt.msv;
	strcpy(newnode->data.ten,tt.ten);
	newnode->data.diem=tt.diem;
	newnode->next =NULL;
	return newnode;
}

void push_back(node **head,sv tt){
	node *newnode = mknode(tt);
	node *tmp = *head;
	if(*head==NULL){
		*head=newnode;
		return;
	}
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=newnode;
}

void input(node **head,int n){
	for(int i=0;i<n;i++){
		sv tt;
		scanf("%d",&tt.msv);
		getchar();
		gets(tt.ten);
		scanf("%f",&tt.diem);
		push_back(head,tt);
	}
}

void output(node *head){
	while(head!=NULL){
		printf("Ma Sinh Vien: %d\n",head->data.msv);
		printf("Ho Va Ten: %s.  Diem: %.2f\n",head->data.ten,head->data.diem);
		head=head->next;
	}
}

void inds(node *head){
	 while(head!=NULL){
		if(head->data.diem>=8.5 && head->data.diem<=10){
		printf("Ma Sinh Vien: %d\n",head->data.msv);
		printf("Ho Va Ten: %s.  Diem: %.2f\n",head->data.ten,head->data.diem);
		}
		head=head->next;
	}
}

void giaiphong(node **head){
	while(*head!=NULL){
		free(*head);
		*head= (*head)->next;
	}
}

int main(){
	node *head=NULL;
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=60){
    	input(&head,n);
    	output(head);
    	printf("Danh sach sinh vien duoc A ktlt:\n");
    	inds(head);
	}else printf("KHONG THOA MAN DIEU KIEN!");
	giaiphong(&head);
}