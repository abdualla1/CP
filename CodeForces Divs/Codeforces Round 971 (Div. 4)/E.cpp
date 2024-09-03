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
    ll n, k;
    cin >> n >> k;
    ll sum = k * n + (n * (n - 1)) / 2;
    ll l = 0, r = n + 1, res = LLONG_MAX;
    while (r - l > 1) {
        ll mid = l + (r - l) / 2;
        ll newsum = k * mid + (mid * (mid - 1)) / 2;
        ll x = abs(2 * newsum - sum);
        res = min (res, x);
        if (2 * newsum < sum)
            l = mid;
        else
            r = mid;
    }
    cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}