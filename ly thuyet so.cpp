#include <iostream>
#include <math.h>
using namespace std;
int p[100001];

void check(){
	for(int i=1; i<=100000;i++)
	p[i]=i;
  for(int i=2;i<=sqrt(100000);i++){
  	if(p[i]==i){
  		for(int j=i*i;j<=100000;j+=i){
  			if(p[j]==j)
  				p[j]=i;
		  }
	  }
   }	
}

int main(){
	int t;
	cin >> t;
	check();
	while(t--){
		int n;
		cin >> n;
		for(int i=1; i<=n;i++){
				cout << p[i] << " ";
			}
		}
		cout << "\n";
	}

