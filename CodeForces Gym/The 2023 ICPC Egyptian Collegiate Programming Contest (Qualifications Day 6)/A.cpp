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
const int mod = 1e9 + 7;
ll modPow(ll a, ll b, ll mod){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
ll modSum(ll a, ll b, ll mod){
    return (a + b + mod) % mod;
}
void solve(){
    ll n;
    cin >> n;
    ll ans = modSum(modPow(2, n+1, mod), -2-n, mod);
    cout << ans << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}
// The code here is based on the sum rule of a series you should find :D 