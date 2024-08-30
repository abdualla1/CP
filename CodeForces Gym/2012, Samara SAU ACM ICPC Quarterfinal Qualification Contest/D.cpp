#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define SWAP(a, b) {\
    a ^= b;\
    b ^= a;\
    a ^= b;\
}
#define sz(x) (int)x.size()
#define watch(x) cout << #x << " = " << x << endl
void zo7le2a(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
map<int, ll> mp;

ll dp(int k) {
    if (k == 1) return 1;
    if (mp.find(k) != mp.end()) return mp[k];
    ll temp = 0;
    for (int i = 2; i * i <= k; ++i) {
        if (k % i == 0) {
            temp += dp(i);
            if (i != k / i) {
                temp += dp(k / i);
            }
        }
    }
    mp[k] = temp + 1;
    return mp[k];
}
void solve(){
    int n;
    cin >> n;
    cout << dp(n) << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}