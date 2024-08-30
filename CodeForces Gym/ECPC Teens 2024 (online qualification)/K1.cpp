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
const int MAXN = 1e5 + 5;
vector<vector<int>>adj;
vector<bool> vis,inStk;
vector<int> low, disc,comp,money;
stack<int> stk;
int timer, cnt;
void dfs(int u){
    vis[u] = true;
    low[u] = disc[u] = timer++;
    stk.push(u);
    inStk[u] = true;
    for(auto v : adj[u]){
        if(!vis[v]){
            dfs(v);
            low[u] = min(low[u], low[v]);
        }else if(inStk[v]){
            low[u] = min(low[u], disc[v]);
        }
    }
    if(low[u] == disc[u]){
        int v;
        cnt++;
        do{
            v = stk.top();
            stk.pop();
            inStk[v] = false;
            comp[v] = cnt;
        }while(v != u);
    }
}
void solve(){
   int n,m;
    cin >> n >> m;
    money = vector<int>(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> money[i];
    }
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1);
    inStk = vector<bool>(n + 1,false);
    low = vector<int>(n + 1,-1);
    disc = vector<int>(n + 1,-1);
    comp = vector<int>(n + 1);
    timer = 0;
    cnt = 0;
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    vector<ll> res(cnt + 1,0);
    for(int i = 1; i <= n; i++){
        res[comp[i]] += money[i];
    }
    ll ans = 0;
    for(int i = 1; i <= cnt; i++){
        ans = max(ans,res[i]);
    }
    cout << ans << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}