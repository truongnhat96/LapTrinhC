#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int cnt=n;
		for(int j=1;j<=cnt;j++){
			if(j<=n-i){
			cout << " ";
		}else{
			cout << "*";
		}
		
	}
		cout << "\n";
	}
}
