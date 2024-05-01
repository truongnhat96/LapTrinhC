#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int n,l;
ll p[1000005];
ll f(ll m){
	ll sum = 0;
	for(int i=0;i<n;i++){
		if(p[i]>m) sum+=(p[i]-m);
	}
	return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> l;
	for(int i=0;i<n;i++) cin >> p[i];
	ll left = 0, right = *max_element(p,p+n);
	ll ans = -1;
	while(left<=right){
		ll mid = (left+right)/2;
		if(f(mid)>=l){
			ans = mid;
			left = mid+1;
		}else right = mid-1;
	}    
	cout << ans;
    return 0;
}
