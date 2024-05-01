#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long double ld;
typedef long long int lli;
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int p[n];
    for(int &x : p) cin >> x;
    map<ll,ll> mp;
    mp[0] = 1;
    ll sum = 0,ans = 0;
    for(int i=0;i<n;i++){
        sum+=p[i];
        cout << sum << endl;
        ans+=mp[sum%n];
        mp[sum]++;
    }
    cout << ans;
    return 0;
}
