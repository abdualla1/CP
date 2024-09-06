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
#define int ll
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m),pref(n+1);
    for(int i =0; i <n;i++ ) {cin >> a[i], pref[i+1] = pref[i] + a[i];}
    for(auto &i :b ) cin >> i;
    for(int i = 0;i<m;i++){
        int x = lower_bound(all(pref),b[i])- pref.begin();
        cout << x << " " << b[i] - pref[x-1] << endl;
    }
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}