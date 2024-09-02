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
const int MOD = 1e9 + 7;

long long modexp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<ll> suff(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suff[i] = (suff[i + 1] + a[i]) % MOD;
    }
    ll sp = 0;
    for (int i = 0; i < n - 1; i++) {
        sp = (sp + a[i] * suff[i + 1] % MOD) % MOD;
    }
    ll q = (1LL * n * (n - 1) / 2) % MOD;
    ll Q = modexp(q, MOD - 2, MOD);

    cout << (sp * Q) % MOD << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}