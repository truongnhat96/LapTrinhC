#include <bits/stdc++.h>
using namespace std;
using ll =long long;

double can(double n,double x){
	if(n==1){
		return sqrt(1);
	}
	if(n==2){
		return sqrt(2+sqrt(1));
	}else{
		return sqrt(n+can(n-x,x+1));
	}
}
int main(){
   int tc;
   cin >> tc;
   while(tc--){
   	  double n;
   	cin >> n;
   	cout << fixed << setprecision(5) << can(n,1) << endl;
   }
}
