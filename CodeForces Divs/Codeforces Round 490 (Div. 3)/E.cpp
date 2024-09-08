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
const int N = 5010;
vector<vector<int>> adj(N);
vector<bool> vis(N,0);
vector<bool> ok(N,0);
int cnt;
void dfs(int u){
    vis[u] = 1;
    for(auto to : adj[u])
        if(!vis[to])
            dfs(to);
}
void dfs1(int u){
    ok[u] = 1;
    cnt++;
    for(auto to : adj[u])
        if(!vis[to] && !ok[to])
            dfs1(to);
}
void solve(){
    int n,m,s,ans = 0;
    cin >> n >> m >> s;
    s--;
    for(int i =0;i<m;i++){
        int x,y;
        cin >> x >> y;
        x--;y--;
        adj[x].push_back(y);
    }
    dfs(s);
    vector<pair<int,int>> edg;
    for(int i =0;i<n;i++){
        if(!vis[i]){
            cnt = 0;
            ok = vector<bool>(N,0);
            dfs1(i);
            edg.push_back({cnt,i});
        }
    }
    sort(rall(edg));
    for(auto u : edg){
        if(!vis[u.second]){
            ans++;
            dfs(u.second);
        }
    }
    cout << ans << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}