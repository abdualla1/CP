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
struct point{
    int x,y;
    point(int x,int y):x(x),y(y){}
    point(){}
};
void solve(){
    int n;
    cin >> n;
    vector<bool> y0(n + 1, false),y1(n + 1, false);;
    vector<point> p(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p[i] = {x, y};
        if (y == 0)
            y0[x] = true;
        else
            y1[x] = true;
    }
    
    ll res = 0;
    for (int i = 0; i <= n; i++) {
        if (y0[i] && y1[i]) {
            res += (n - 2);
        }
    }
    for (int i = 1; i < n; i++) {
        if (y0[i] && y1[i + 1] && y1[i - 1])
            res++;
        if (y1[i] && y0[i + 1] && y0[i - 1])
            res++;

    }
    cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}