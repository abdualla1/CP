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
const int N = 2e5 + 5;
vector<vector<int>> adj(N);
vector<int> ord(N),subtree(N),subSZ(N);
int timer = 0;
void dfs(int n){
    subtree[n] = timer;
    ord[timer++] = n;
    subSZ[n] = 1;
    for (int u : adj[n]) {
        dfs(u);
        subSZ[n] += subSZ[u];
    }
}
void solve(){
   int n,q;
    cin >> n >> q;
    for (int i = 2; i <= n; i++)
    {
        int x; cin >> x;
        adj[x].push_back(i);
    }
    dfs(1);
    while(q--){
        int x,y;
        cin >> x >> y;
        cout << (subSZ[x]>=y?ord[subtree[x]+y-1]:-1) << endl;
    }

}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}