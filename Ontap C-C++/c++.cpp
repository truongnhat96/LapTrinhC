#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD =1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n, m; // hàng, cột
        cin >> n >> m;
        int a[n+1][m+1];
        for(int i=1;i<=n;i++){
        	for(int j=1;j<=m;j++) cin >> a[i][j];
		}
  int prefix[n + 1][m + 1];
  memset(prefix, 0, sizeof(prefix));
  for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
   }
}
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=m;j++){
  		cout << prefix[i][j] << ' ';
	  }
	  cout << endl;
  }
  int ap, A, b, B;
  cin >> ap >> A >> b >> B;
  cout << endl;
  cout << prefix[A][B] - prefix[ap - 1][B] - prefix[A][b - 1] + prefix[ap - 1][b - 1];
    return 0;
}
//3 1 2 3 4
//5 2 1 7 6
//2 1 2 2 3
//4 6 5 9 2