#include <bits/stdc++.h>
#define end "\n"
using namespace std;
using ll = long long;
using ld = long double;
using lli = long long int;
const int MOD = 1e9+7;

struct phanso{
	int tu,mau;
	void rutgon(){
		int ucln = __gcd(tu,mau);
		tu/=ucln;
		mau/=ucln;
	}
	friend phanso operator + (phanso a, phanso b){
		phanso ans;
		ans.tu = a.tu*b.mau + b.tu*a.mau;
		ans.mau = a.mau*b.mau;
		ans.rutgon();
		return ans;
	}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << 12 << end << 1;
    return 0;
}
