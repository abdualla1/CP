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
int a,n,m;
vector<bool> rain;
vector<int>cost,best;
vector<vector<int>> dp;
int rec(int idx , int umb){
    if(idx == a)
        return 0;
    int &res = dp[idx][umb];
    if(~res)
        return res;
    res = INT_MAX;
    if(!rain[idx]) // hena ha skip 3ala tol mngher umb
        res = min(res,rec(idx+1,m));
    if(~best[idx]) // lw feh best
        res = min(res,rec(idx+1,best[idx])+cost[best[idx]]);
    if(umb != m) // lw el umb lesa m3aya
        res = min(res,rec(idx+1,umb) + cost[umb]);
    return res;
}
void solve(){
    cin >> a >> n >> m;
    rain.resize(a+1);
    cost.resize(m);
    best.resize(a+1,-1);
    dp.resize(a+1,vector<int>(m+1,-1));
    for (int i = 0; i < n; i++){
        int l,r;
        cin >> l >> r;
        for (int j = l; j < r; j++)
            rain[j]=1;
    }

    for (int i = 0; i < m; i++){
        int x;
        cin >> x >> cost[i];
        best[x] = (best[x] == -1 || cost[i] < cost[best[x]]) ? i : best[x];
    }
    int res = rec(0,m);
    res == INT_MAX ? cout << -1 << endl : cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}