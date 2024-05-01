#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sort(int a[],int n){
	for(int i=0;i<n;i++){
		 for(int j=i+1;j<n;j++){
		 	  if(a[i]>a[j]){
		 	  	  int tmp=a[i];
		 	  	  a[i]= a[j];
		 	  	  a[j]=tmp;
			   }
		 }
	}
}

void output(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	//cau 1
//	int n;
//	scanf("%d",&n);
//    if(n>10 && n<50){
//         double sum=0;
//		 for(int i=1;i<=n;i++){
//		 	sum+=(1/sqrt(i*(i+1)));
//		 }
//		 printf("tong S la: %.2f",sum);    
//	}else printf("n khong thoa man dieu kien!");

  //cau 2
   int n;
   while(scanf("%d",&n)){
   	    if(n>=5 && n<=20)
   	      break;
   }
   //cách 1, cấp phát động
  // int *p= (int*)malloc(n*sizeof(int));
   //cách 2, dùng mảng
    int p[n];
    for(int i=0;i<n;i++){
    	scanf("%d",&p[i]);
	}
    sort(p,n);
    output(p,n);
    int sum=0;
    for(int i=0;i<n;i++){
    	if(p[i]%2==0){
		printf("%d ",p[i]);
		sum+=p[i];
	    } 
	}
	printf("\n");
	printf("tong cac so chan la: %d",sum);
}