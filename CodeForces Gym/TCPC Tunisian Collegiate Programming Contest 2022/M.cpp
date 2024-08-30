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
   ll x;
   cin >> x;
    for (int i = 2; i * (i - 1) / 2 < x; ++i) {
        int temp = x - i * (i - 1) / 2;
        if(temp %i ==0){
            ll l = temp/i;
            ll r = l+i-1;
            if(l<r) {cout << l << " " << r << endl;return;}
        }
   }
    cout << -1 << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
// disclaimer i spent a week after the gym on this B.tch