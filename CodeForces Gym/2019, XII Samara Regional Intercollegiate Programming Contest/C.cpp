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
vector<bool> vis;
const int N = 1e7+1;
void solve(){
    ll p,n;
    cin >> p >> n;
    n = min (2*p,n);
    vis = vector<bool>(N,false);
    ll cur = 0, ans = 1, next = 1;
    vis[0] =1;
    while(n--){
        cur = (cur + next) %p;
        if(!vis[cur]){
            ans++;
            vis[cur] = 1;
        }
        next++;
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