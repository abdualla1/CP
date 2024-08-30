#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define sz(x) (int)x.size()
#define mx(x, y) (y-x >> 31 & (x^y) ^ y)
#define mn(x, y) (y-x >> 31 & (x^y) ^ x)
#define watch(x) cout << #x << " = " << x << endl
const int N = 10000;
const unsigned ll mod = 1e9 + 7;

void zo7le2a(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
void solve(){
    int n,m;
    cin >> n >>m;
    map<int,int> a,b;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        b[x]++;
    }
    int cnt =0;
    for(auto &x : a){
        cnt += min(x.second,b[x.first]);
    }
    cout << cnt << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}