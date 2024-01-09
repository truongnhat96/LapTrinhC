#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int snt(int x){
	for(int i=2;i<=sqrt(x);i++){
            if(x%i==0)
			 return 0;		
	}
	return x>1;
}

void sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(snt(a[j]) && snt(a[i])){
				if(a[i]<a[j]){
					int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
				}
			}
		}
	}
}

void solve(int n){
	for(int i=1;i<n;i++){
		 if(i%2==0)
		  printf("%d ",i);
	}
}

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
int main(){
//	int n;
//	while(scanf("%d",&n)){
//		if(n>=1 && n<=100)
//		break;
//	}
//	solve(n);
	
		int n;
	while(scanf("%d",&n)){
		if(n>=1 && n<=20)
		break;
	}
	int *p = (int*)malloc(n*sizeof(int));
	if(p==NULL){
		return 1;
	}
	input(p,n);
	output(p,n);
	sort(p,n);
	output(p,n);
	int x,k;
	scanf("%d%d",&x,&k);
	if(k>=1 && k<=n){
		++n;
		p = (int*)realloc(p,n*sizeof(int));
		p[n-1]=p[n-2];
	    for(int i=n-2;i>k-1;i--){
	        p[i]=p[i-1];
		}
		p[k-1]=x;
	}else printf("KHONG HOP LE!");
	output(p,n);
}