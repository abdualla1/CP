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
#define int long long
struct edge{
    int from, to, cost;
};
void dfs(int node, vector<vector<pair<int,int>>>& adj, vector<bool>& vis,stack<int>& st){
    vis[node] = true;
    for(auto child: adj[node]){
        if(!vis[child.first]){
            dfs(child.first, adj, vis,st);
        }
    }
    st.push(node);
}
vector<int> path(int strt, int n, vector<vector<pair<int,int>>>& adj){
    vector<bool> vis(n+1, false);
    stack<int> st;
    vector<int> dist(n+1, INT_MIN);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, adj, vis, st);
        }
    }
    dist[strt] = 0;
    while(!st.empty()){
        int u = st.top();
        st.pop();
        if(dist[u] != INT_MIN){
            for(auto v: adj[u]){
                if(dist[v.first] < dist[u] + v.second) dist[v.first] = dist[u] + v.second;
            }
        }
    }
    return dist;
}

void solve(){
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<pair<int, int>>> adj(n + 1);
    vector<edge> edges(m);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        edges[i] = {u, v, w};
    }
    vector<int> qq(q);
    for (int i = 0; i < q; i++) {
        cin >> qq[i];
    }

    vector<int> from1 = path(1, n, adj);

    vector<vector<pair<int, int>>> rev(n + 1);
    for (auto edge : edges) {
        rev[edge.to].emplace_back(edge.from, edge.cost);
    }
    vector<int> distToEnd = path(n, n, rev);

    for (int qi : qq) {
        if (from1[qi] == INT_MIN || distToEnd[qi] == INT_MIN) {
            cout << -1 << endl;
        } else {
            cout << from1[qi] + distToEnd[qi] << endl;
        }
    }
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}