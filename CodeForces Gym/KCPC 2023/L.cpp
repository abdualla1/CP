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

void zo7le2a() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    vector<pair<int, int>> rng(m);
    for(auto &i: rng) cin >> i.first >> i.second;
    sort(all(a));
    int res = 0;
    for (auto &p: rng) {
        int l = p.first;
        int r = p.second;
        auto lb = lower_bound(all(a), l);
        auto ub = upper_bound(all(a),  r);
        int temp = distance(lb, ub);
        res = max(res, temp);
    }

    cout << res << endl;
}

    signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}