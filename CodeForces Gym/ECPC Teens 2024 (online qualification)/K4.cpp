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

vector<vector<int>> adj;
vector<bool> vis;
vector<ll> money;

ll dfs(int node) {
    vis[node] = true;
    ll total = money[node];
    for (int u: adj[node]) {
        if (!vis[u]) {
            total += dfs(u);
        }
    }
    return total;
}

void solve() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1, false);
    money = vector<ll>(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> money[i];
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll ans = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            ll total = dfs(i);
            ans = max(ans, total);
        }
    }

    cout << ans << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}
