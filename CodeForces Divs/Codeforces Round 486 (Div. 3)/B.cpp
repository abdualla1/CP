#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
bool cmp(string a,string b){
    return sz(a) < sz(b);
}
void solve(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(auto &i : a) cin >> i;
    sort(all(a),cmp);
    for(int i = 0;i<n-1;i++)
        if(a[i+1].find(a[i]) == string::npos) return void(no);
    yes;
    for(auto &i : a) cout << i << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}