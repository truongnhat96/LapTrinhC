#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return n>1;
}


void input(int p[],int n){
	 for(int i=0;i<n;i++){
	 	scanf("%d",&p[i]);
	 }
}

void output(int p[],int n){
	 for(int i=0;i<n;i++){
	 	printf("%d ",p[i]);
	 }
	 printf("\n");
}

void sort(int p[],int n){
	 for(int i=0;i<n-1;i++){
	 	 int max = i;
	 	 for(int j=i+1;j<n;j++){
	 	 	  if(p[max]<p[j])
	 	 	  	 max=j;
		  }
		  int tmp = p[max];
		  p[max]=p[i];
		  p[i]=tmp;
	 }
}

int main(){
	//cau 1
//	int n;
//	while(scanf("%d",&n)){
//		if(n>=1 && n<=1000)
//		 break;
//	}
//	if(snt(n))
//	 printf("%d la so nguyen to",n);
//	 else printf("%d khong la so nguyen to",n);

    //cau 2
    int n;
    	while(scanf("%d",&n)){
		if(n>=1 && n<=50)
		 break;
	}
	int *p = (int*)malloc(n*sizeof(int));
	input(p,n);
	output(p,n);
	sort(p,n);
	output(p,n);
	int k,x;
    printf("Nhap vi tri chen va phan tu can chen: ");
    scanf("%d%d",&k,&x);
    if(k>=0 && k<n-1){
    	++n;
    	 p = (int*)realloc(p,n*sizeof(int));
    	for(int i=n-1;i>k;i--){
    		p[i]=p[i-1];
		}
		p[k]=x;
		printf("\nDay moi sau khi chen: ");
		output(p,n);
	}else printf("Vi tri chen khong hop le!");
}