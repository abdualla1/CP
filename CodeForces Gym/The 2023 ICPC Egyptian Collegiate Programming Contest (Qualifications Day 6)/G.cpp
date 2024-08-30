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
vector<int> a;
set<int> st;
int res;

void dfs(int node, int par) {
    st.insert(a[node]);
    for (auto child: adj[node]) {
        if (child != par) {
            dfs(child, node);
        }
    }
    if (st.count(a[node])) {
        st.erase(a[node]);
        res++;
    }
}

void solve() {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n+1);
    a = vector<int>(n);
    for(int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i < n ; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    st.clear();
    res = 0;
    dfs(1, 0);
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