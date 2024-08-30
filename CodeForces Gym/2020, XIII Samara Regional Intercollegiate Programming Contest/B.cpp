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

void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> x(n);
    for(auto &i : x) cin >> i;
    int res = 0;

    for (int i = 0; i < n; ++i) {
        if (abs(x[i]) <= t) {
            int temp = 1;
            int tt = t - abs(x[i]);
            int j = lower_bound(x.begin() + i + 1, x.end(), x[i] + tt + 1) - x.begin() - 1;
            temp += (j - i);
            res = max(res, temp);
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (abs(x[i]) <= t) {
            int temp = 1;
            int tt = t - abs(x[i]);
            int j = lower_bound(x.begin(), x.begin() + i, x[i] - tt) - x.begin();
            temp += (i - j);
            res = max(res, temp);
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