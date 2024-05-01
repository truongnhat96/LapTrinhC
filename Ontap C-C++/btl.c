#include <stdio.h>
#include <math.h>
int main(){
	int lc;
	scanf("%d",&lc);
	
	if(lc==1){
		//code bài 1
		float a;
		scanf("%f",&a);
		if(a<0)
		printf("-1");
		else{
			int goc= a*36;
		printf("%d",goc);
	   }
	}else if(lc==2){
		//code bài 2
		
		
		
	}else if(lc==3){
		//code bài 3
		int l,r,x;
		scanf("%d%d%d",&l,&r,&x);
		if(l<r){
			if(x<=1000){
				int w = (r-l)*x*7;
				printf("%d",w);
			}else if(x>1000 && x<=1600){
				int w = (r-l)*1000*7 + (r-l)*(x-1000)*12;
				printf("%d",w);
			}else if(x>1600 && x<=2600){
				int w = (r-l)*600*12 + (r-l)*1000*7 + (r-l)*(x-1600)*7;
				printf("%d",w);
			}else if(x<0){
				printf("-1");
			}
		}else if(l>r){
				if(x<=1000){
				int w = (l-r)*x*5;
				printf("%d",w);
			}else if(x>1000 && x<=1600){
				int w = (l-r)*1000*5 + (l-r)*(x-1000)*7;
				printf("%d",w);
			}else if(x>1600 && x<=2600){
				int w = (l-r)*600*7 + (l-r)*1000*5 + (l-r)*(x-1600)*5;
				printf("%d",w);
			}else if(x<0){
				printf("-1");
			}
		}
	}else if(lc==4){
		//code bài 4
		int pt,k;
		scanf("%d%d",&pt,&k);
		if(k==1){
			float km= pt*(5/3.0);
			printf("%.2f",km);
		}else if(k==2){
			if(pt>=50){
				float km = (pt-50)*(5/3.6) + 30*(5/4.9) + 20*(5/7.0);
				printf("%.2f",km);
			}else if(pt<50 && pt >=20){
				float km = (pt-20)*(5/4.9) + 20*(5/7.0);
				printf("%.2f",km);
			}else if(pt<20){
			float km = (20-pt)*(5/7.0);
			  printf("%.2f");
			}
		}else if(k==3){
			if(pt>=50){
				float km = (pt-50)*(5/8.0) + 30*(5/10.5);
				printf("%.2f",km);
			}else if(pt<50 && pt >=20){
				float km = (pt-20)*(5/10.5);
				printf("%.2f",km);
			}
		}else if(k==4){
				if(pt>=50){
				float km = (pt-50)*(5/4.4) + 30*(5/5.3);
				printf("%.2f",km);
			}else if(pt<50 && pt >=20){
				float km = (pt-20)*(5/5.3);
				printf("%.2f",km);
			}
		}
	}else if(lc==5){
	    //code bài 5
	    
	    
	}
}