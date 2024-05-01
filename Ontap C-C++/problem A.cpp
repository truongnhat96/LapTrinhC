#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
string tebao[35];
string rev(string s){
	int l = 0, r = s.size()-1;
	while(l<r){
		swap(s[l],s[r]);
		++l; --r;
	}
	return s;
}
void nhanban(){
	tebao[1] = "X";
	for(int i=2;i<=30;i++){
		if(i%2==0){
			tebao[i]+=tebao[i-1];
			for(int j = 0;j<tebao[i-1].size();j++){
				if(tebao[i-1][j]=='X') tebao[i]+="Y";
				else tebao[i]+="X";
			}
		}else{
			tebao[i]+=tebao[i-1];
			tebao[i]+=rev(tebao[i-1]);
		} 
	} 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    nhanban();
    while(t--){
    	int n,k;
    	cin >> n >> k;
    	cout << tebao[n][k-1] << endl;
	}
    return 0;
}

//    1 X
//    2 XY
//    3 XYYX
//    4 XYYXYXXY
//    5 XYYXYXXYYXXYXYYX
//    6 XYYXYXXYYXXYXYYX YXXYXYYXXYYXYXXY
