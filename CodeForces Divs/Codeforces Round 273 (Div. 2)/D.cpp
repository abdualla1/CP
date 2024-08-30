#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define sz(x) (int)x.size()
#define watch(x) cout << #x << " = " << x << endl
void zo7le2a(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
const int mod = 1e9+7;

void solve(){
  int r,g; cin >> r >> g;
  int mx = r+g;
  int h(0);

    while(h*(h+1)/2 <= mx) h++;
    h--;
    vector<ll> dp(r + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= h; i++) {
        for (int j = r; j >= i; j--) {
            dp[j] = (dp[j] + dp[j - i]) % mod;
        }
    }

    ll res = 0;
    int B = h * (h + 1) / 2;

    for (int i = 0; i <= r; i++) {
        if (B - i <= g) {
            res = (res + dp[i]) % mod;
        }
    }
    cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}