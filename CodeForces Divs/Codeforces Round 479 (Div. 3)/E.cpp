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
const int N = 2e5+5;
vector<vector<int>> adj(N);
vector<bool> vis(N);
vector<int> deg(N),cycle;
void dfs(int n){
    vis[n] = true;
    cycle.push_back(n);
    for(auto child: adj[n]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void solve(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if(!vis[i]){
            cycle.clear();
            dfs(i);
            bool ok = true;
            for(auto n: cycle){
                if(deg[n] != 2){
                    ok = false;
                    break;
                }
            }
            cnt+= ok;
        }
    }
    cout << cnt << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}