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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i: a) cin >> i;
    int temp = INT_MAX;
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < temp) {
            temp = a[i];
        }
        int ans = a[i] - temp;
        res = max(ans,res);
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