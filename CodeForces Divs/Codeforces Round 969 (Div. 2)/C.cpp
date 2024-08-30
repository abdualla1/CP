#include <bits/stdc++.h>

using namespace std;
#define all(x) (x).begin(), (x).end()
#define resall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define sz(x) (int)x.size()
#define watch(x) cout << #x << " = " << x << endl

void zo7le2a() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll d = __gcd(a, b);
    vector<ll> c(n);
    for (auto &x: c) cin >> x;
    vector<ll> r;
    r.reserve(n);
    for (auto x: c) {
        ll rem = x % d;
        r.push_back(rem);
    }
    sort(all(r));
    r.erase(unique(all(r)), r.end());
    if (sz(r) == 1) return void(cout << 0 << endl);
    sort(all(r));
    ll mx = 0;
    for (int i = 1; i < sz(r); i++) {
        mx = max(mx, r[i] - r[i - 1]);
    }
    ll tt = d + r[0] - r[r.size() - 1];
    mx = max(mx, tt);
    ll res = d - mx;
    cout << res << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}