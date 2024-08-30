#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define SWAP(a, b) {\
    a ^= b;\
    b ^= a;\
    a ^= b;\
}
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
    double p, q;
    cin >> p >> q;
    double p1 = p / 100.0;
    double p2 = q / 100.0;
    double P_H = 0.5 * p1 + 0.5 * p2;
    double C1 = (p1 * 0.5) / P_H;
    double C2 = (p2 * 0.5) / P_H;
    double ans = p1 * C1 + p2 * C2;
    cout << fixed << setprecision(15) << ans << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}
// Bayes theo