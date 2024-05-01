#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sv sv;
typedef struct node node;
struct sv{
   int masv;
   char hoten[30];	
};

struct node{
  sv data;
  node *next;	
};

node *mknode(sv tt){
	node *newnode = (node*)malloc(sizeof(node));
	  strcpy(newnode->data.hoten,tt.hoten);
	  newnode->data.masv = tt.masv;
	  newnode->next = NULL;
	  return newnode;
}

void push_back(node **head,sv tt){
	node *newnode = mknode(tt);
	node *tmp = *head;
	if(*head==NULL){
		*head = newnode;
		return;
	}
	while(tmp->next!=NULL){
		tmp = tmp->next;
	}
	tmp->next = newnode; 
}


void input(node **head,int n){
	for(int i=0;i<n;i++){
		sv tt;
		getchar();
		fgets(tt.hoten,sizeof(tt.hoten),stdin);
		tt.hoten[strlen(tt.hoten)-1] = '\0';
		scanf("%d",&tt.masv);
		push_back(head,tt);
	}
}


void output(node *head){
	int cnt=1;
	while(head!=NULL){
		printf("STT: %d\n",cnt);
		printf("Ma sinh vien: %d\n",head->data.masv);
		printf("Ho Va Ten: %s\n",head->data.hoten);
		printf("--------------------\n");
		head=head->next;
		++cnt;
	}
}

int main(){
	node *head=NULL;
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=60){
		input(&head,n);
		output(head);
	}else printf("KHONG HOP LE!");
}