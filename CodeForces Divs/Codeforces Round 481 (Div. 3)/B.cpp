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
    string s;
    cin >> s;
    int mx =0,curr=0;
    int cnt = 0;
    for(auto i:s){
        if(i == 'x')curr++;
        else curr = 0;
        mx = max(mx,curr);
        if(curr >=3){
            cnt++;
        }
    }
    if(mx < 3) return void (cout << 0 << endl);
    cout << cnt << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}