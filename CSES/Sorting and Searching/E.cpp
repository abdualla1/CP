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
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        int x, b;
        cin >> x >> b;
        a.push_back({x, 1});
        a.push_back({b + 1, -1});
    }
    sort(all(a));
    int res = 0, cur = 0;
    for (int i = 0; i < sz(a); i++) {
        cur += a[i].second;
        res = max(res, cur);
    }
    cout << res << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    //  cin >>t;
    while (t--) {
        solve();
    }
}