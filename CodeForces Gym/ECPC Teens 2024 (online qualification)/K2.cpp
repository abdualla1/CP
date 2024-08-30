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

struct DSU{
    vector<int> p, r;
    vector<ll> s;
    DSU(int n, vector<ll>& money){
        p.resize(n + 1);
        r.resize(n + 1, 0);
        s.resize(n + 1);
        for(int i = 1; i <= n; ++i) {
            p[i] = i;
            s[i] = money[i];
        }
    }
    int find(int x){
        return p[x] == x ? x : p[x] = find(p[x]);
    }
    void merge(int x, int y){
        x = find(x);
        y = find(y);
        if(x != y){
            if(r[x] == r[y]) r[x]++;
            if(r[x] > r[y]) swap(x, y);
            p[x] = y;
            s[y] += s[x];
        }
    }
};

void solve(){
    int n, m;
    cin >> n >> m;
    vector<ll> money(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> money[i];
    }
    DSU dsu(n, money);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        dsu.merge(x, y);
    }
    ll res = 0;
    for(int i = 1; i <= n; i++){
        if(dsu.find(i) == i){
            res = max(res, dsu.s[i]);
        }
    }
    cout << res << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}
