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
    ll n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    int mn = -1, mid = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        sort(all(a[i]));
        mn = max(mn, a[i][0]);
        mid = max(mid, a[i][1]);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(a[i][1] > mn && a[i][2] > mid){
            ans.push_back(i+1);
        }
    }
    cout << sz(ans) << endl;
    for(auto x: ans) cout << x << " ";
    cout << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}