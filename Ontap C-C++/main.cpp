#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a+b>c && b+c >a && a+c>b){
		long long cv=a+b+c;
		float p=(float)cv/2;
		double s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout << cv << " " << fixed << setprecision(2) << s;
	}else{
		cout << "NO";
	}
}