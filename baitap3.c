#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct thisinh thisinh;
typedef struct node node;
struct thisinh{
	 char ten[50];
	 int date;
	 float dt,dl,dh; 
};

struct node{
    thisinh data;
	node *next;	
};


node *mknode(thisinh tt){
	 node *newnode = (node*)malloc(sizeof(node));
	 strcpy(newnode->data.ten,tt.ten);
	 newnode->data.date = tt.date;
	 newnode->data.dt = tt.dt;
	 newnode->data.dl = tt.dl;
	 newnode->data.dh = tt.dh;
	 newnode->next = NULL;
	 return newnode;
}

void push_back(node **head,thisinh tt){
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
		thisinh tt;
	   getchar();
	   fgets(tt.ten,sizeof(tt.ten),stdin);
	   tt.ten[strlen(tt.ten)-1]='\0';
	   scanf("%d",&tt.date);
	   scanf("%f%f%f",&tt.dt,&tt.dl,&tt.dh);
	  push_back(head,tt);
	}
}



void trungtuyen(node *head){
	while(head!= NULL){
		if(head->data.dt + head->data.dl + head->data.dh >=20){
			printf("Ho va ten thi sinh: %s.  Nam sinh: %d.\n",head->data.ten,head->data.date);
	        printf("Diem toan: %.2f.  Diem ly: %.2f.  Diem hoa: %.2f.\n",head->data.dt,head->data.dl,head->data.dh);
	        printf("Tong diem cua thi sinh: %.2f.\n\n",head->data.dt + head->data.dl + head->data.dh);
		}
		head= head->next;
	}
}

void output(node *head){
	while(head!= NULL){
	   printf("Ho va ten thi sinh: %s.  Nam sinh: %d.\n",head->data.ten,head->data.date);
	   printf("Diem toan: %.2f.  Diem ly: %.2f.  Diem hoa: %.2f.\n",head->data.dt,head->data.dl,head->data.dh);
	   printf("Tong diem cua thi sinh: %.2f.\n\n",head->data.dt + head->data.dl + head->data.dh);	
		head= head->next;
	}
}

int main(){    
    node *head = NULL;
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=40){
    	input(&head,n);
    	output(head);
    	printf("\n-----------------------------\n");
    	printf("DANH SACH THI SINH TRUNG TUYEN:\n");
    	trungtuyen(head);
	}else printf("n khong thoa man de bai");
}