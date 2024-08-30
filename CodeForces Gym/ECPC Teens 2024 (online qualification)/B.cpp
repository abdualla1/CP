#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

void solve(){
    int n, t, k, a, b;
    cin >> n >> t >> k >> a >> b;
    if (a == b) return void(yes);
    vector<bool> vis(n + 1, false);
    queue<pair<int, int>> q;
    q.push({a, 0});
    vis[a] = true;
    while (!q.empty()) {
        auto [crr, days] = q.front();
        q.pop();
        if (days >= t) continue;
        int nxt1 = (crr + k) % n;
        if (nxt1 == 0) nxt1 = n;
        int nxt2 = (crr + k + 1) % n;
        if (nxt2 == 0) nxt2 = n;
        if (!vis[nxt1]) {
            if (nxt1 == b) return void(yes);
            vis[nxt1] = true;
            q.push({nxt1, days + 1});
        }
        if (!vis[nxt2]) {
            if (nxt2 == b) return void(yes);
            vis[nxt2] = true;
            q.push({nxt2, days + 1});
        }
    }
    no;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}