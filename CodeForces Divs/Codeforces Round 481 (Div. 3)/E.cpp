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
    int n,w;
    cin >> n>>w;
    vector<int> a(n);
    int cnt = 0,mn = 0,mx = 0;
    for(auto &i : a){
        cin >> i;
        cnt += i;
        mn = min(mn,cnt);
        mx = max(mx,cnt);
    }
    cout << max(0LL,w-mx+mn+1) << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}