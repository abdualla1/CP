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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(k);
    for(auto &i : a) cin >> i.first >> i.second;
    sort(all(a));
    int res = 0;
    int prev = 0;
    res = a[0].first - 1;
    for (int i = 0; i < k; ++i) {
        if (a[i].first > prev ) res = max(res, a[i].first - prev - 1);
        prev =max(prev, a[i].second);
    }
    res = max(res, n - prev);
    cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}