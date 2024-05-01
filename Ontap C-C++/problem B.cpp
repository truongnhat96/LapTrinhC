#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_freq = 0, st = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        max_freq = max(max_freq, ++mp[a[i]]);
        if (i - st + 1 - max_freq > k) --mp[a[st++]];
    }
    cout << max_freq;
    return 0;
}