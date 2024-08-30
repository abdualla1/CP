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
#define int long long
void solve(){
   int n,m,a;
    cin >> n >> m >> a;
    int cookies = n - m;
    cout << min (a, cookies) << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}