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

void solve(){
  ll l ,r;
    cin >> l >> r;
    ll d = r - l;
    ll L = 0, R = 1e6+1;
    while (R-L > 1) {
        ll mid = L + (R-L) / 2;
        ll sum = (mid * (mid - 1)) / 2;
        if (sum <= d)
            L = mid;
         else
            R = mid;
    }
    cout << L << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}