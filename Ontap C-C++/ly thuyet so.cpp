#include <bits/stdc++.h>

using namespace std;
int a[1000001]={0};
void prime(){
	for(int i=0;i<=1e6;i++){
		a[i]=1;
	}
	a[0]=a[1]=0;
	for(int i=2;i<=1000;i++){
		if(a[i]){
			for(int j=i*i;j<=1e6;j+=i){
				a[j]=0;
			}
		}
	}
}
int num(int x){
	int sum=0;
	while(x){
		sum+=(x%10);
		x/=10;
	}
	return sum;
}

int main() {
	prime();
    int n,h;
    cin >> n >> h;
    int count=0;
    for(int i=2;i<=n;i++){
    	if(a[i] && num(i)==h){
    	cout << i << endl;	
    		++count;
		} 
	}
	cout << count;
}