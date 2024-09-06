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

#define int ll
int n, m;
ll k;
vector<vector<ll>> grid;
map<pair<pair<int, int>, ll>, int> mp;
int res = 0;

void dfs(int x, int y, ll curr, int can, int state) {
    if (state == 0) {
        curr ^= grid[x][y];
        mp[{{x, y}, curr}]++;
        if (y + 1 < m && can)
            dfs(x, y + 1, curr, can - 1, 0);

        if (x + 1 < n && can)
            dfs(x + 1, y, curr, can - 1, 0);

    } else {
        if (can == 0)
            return void(res += mp[{{x, y}, k ^ curr}]);

        curr ^= grid[x][y];
        if (x - 1 >= 0 && can)
            dfs(x - 1, y, curr, can - 1, 1);

        if (y - 1 >= 0 && can)
            dfs(x, y - 1, curr, can - 1, 1);

    }
}

void solve() {
    cin >> n >> m >> k;
    grid.resize(n, vector<ll>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }
    dfs(0, 0, 0, (n + m - 2) / 2, 0);
    dfs(n - 1, m - 1, 0, ((n + m - 2) - ((n + m - 2) / 2)), 1);

    cout << res << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}
