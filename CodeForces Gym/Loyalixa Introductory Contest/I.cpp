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
vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<string> grid;
vector<vector<int>> vis;
bool valid(int nx, int ny, int n, int m) {
    return nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] == '#';
}
int bfs(pair<int, int> st) {
    int n = sz(grid);
    int m = sz(grid[0]);
    queue<pair<int, int>> q;

    q.push(st);
    vis[st.first][st.second] = 0;
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : dir) {
            int nx = x + dx;
            int ny = y + dy;
            if (valid(nx, ny, n, m)) {
                return vis[x][y] + 1;
            }
            if (vis[nx][ny] == -1) {
                vis[nx][ny] = vis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}
void solve(){
    int n, m;
    cin >> n >> m;
    grid.resize(n);
    vis.assign(n, vector<int>(m, -1));
    pair<int, int> st;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'Z') {
                st = {i, j};
            }
        }
    }
    cout << bfs(st) << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}