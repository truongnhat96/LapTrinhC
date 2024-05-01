#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check(int n){
	double x = sqrt(n);
	if(x*x==n)
	  return 1;
	  return 0;
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
int max(int a[],int n){
	 int max=-1e9;
	 for(int i=0;i<n;i++){
	 	  if(a[i]%3==0 && a[i]>max)
	 	  max=a[i];
	 }
	 return max;
}

void in(int a[],int n){
	int sum=0;
	 for(int i=0;i<n;i++){
	 	  if(a[i]%3==0){
	 	  	printf("%d ",a[i]);
	 	  	sum+=a[i];
		   }
	 }
	 printf("\nTong cac so chia het cho 3: %d",sum);
}
int main(){
//	int n;
//	while(scanf("%d",&n)){
//		if(n>0 && n<60)
//		  break;
//	}
//	int s=0;
//	for(int i=2;i<n;i++){
//		if(check(i))
//		s+=i;
//	}
//	printf("%d",s);

   int n;
	while(scanf("%d",&n)){
		if(n>=1 && n<=20)
		  break;
	}
    int *p = (int*)malloc(n*sizeof(int));
    input(p,n);
    output(p,n);
    printf("So chia het cho 3 lon nhat trong mang la: %d\n",max(p,n));
    in(p,n);
}