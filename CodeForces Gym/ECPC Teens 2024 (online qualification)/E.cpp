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
    for(auto &i : a) cin >>i;
    vector<int>ans;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) ans.push_back(a[i]);
   }
    for(int i = n-1; i>=0; i--){
        if(i % 2 == 1) ans.push_back(a[i]);
    }
    for(auto i : ans) cout << i << " ";
    cout << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}