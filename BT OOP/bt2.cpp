#include <bits/stdc++.h>
#define endln "\n"
using namespace std;
using ll = long long;
using ld = long double;
using lli = long long int;
const int MOD = 1e9+7;
class lopsv{
private: 
         string ten,ns;
		 double d1,d2,d3;
public:
         friend istream& operator >> (istream& in, lopsv &a){
         	 getline(in, a.ten);
         	 in >> a.ns;
         	 in >> a.d1 >> a.d2 >> a.d3;
         	 return in;
		 }
		 friend ostream& operator << (ostream& out, lopsv a){
		 	out << a.ten << ' ' << a.ns << " ";
		 	out << fixed << setprecision(1) << a.d1 + a.d2 + a.d3 << endln;
		 	return out;
		 }	 
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lopsv x; cin >> x;
    cout << x;
    return 0;
}
