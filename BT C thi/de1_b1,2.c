#include <stdio.h>
#include <stdlib.h>

void input(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void output(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void sort(int a[],int n){
	for(int i=1;i<n;i++){
		int x = a[i];
		int j = i-1;
		while(j>=0 && x > a[j]){
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = x; 
	}
}

int main(){
//	int n;
//	while(scanf("%d",&n)){
//		if(n>0 && n<5000)
//		break;
//		printf("Nhap lai: ");
//	}
//	int s=0;
//	for(int i=0;i<n;i++){
//		if(i%2!=0){
//			printf("%d ",i);
//			s+=i;
//		}
//	}


    int n;
	while(scanf("%d",&n)){
		if(n>5)
		break;
		printf("Nhap lai: ");
	}
	int *p = (int*)malloc(n*sizeof(int));
	input(p,n);
	output(p,n);
    sort(p,n);
    int x;
    printf("Nhap vao so nguyen X: ");
    scanf("%d",&x);
    ++n;
    p=(int*)realloc(p,n*sizeof(int));
    int k=0;
    for(int i=n-2;i>=0;i--){
    	if(p[i]<=x)
    	k=i;
	}
	if(x<=p[n-2] && k==0)
	   k=n-1;
	for(int i=n-1;i>k;i--){
		p[i] = p[i-1];
	}
	p[k]= x;
	output(p,n);
}