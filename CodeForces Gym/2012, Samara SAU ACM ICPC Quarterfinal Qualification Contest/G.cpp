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
    string s; cin >> s;
    if(sz(s) > 26) {cout << "IMPOSSIBLE" << endl; return;}
    map<char,int> mp;
    for(auto i : s) mp[i]++;
    vector<char> rep,can;
    for(char i = 'a'; i <= 'z'; i++){
        if(mp[i] == 0) can.push_back(i);
        else if(mp[i] > 1) {
            for(int j = 0;j<mp[i]-1;j++) rep.push_back(i);
        }
    }
    if(sz(rep) > sz(can)) {cout << "IMPOSSIBLE" << endl; return;}
    int idx = 0;
    for(char & i : s){
        if(mp[i] >1){
            mp[i]--;
            i = can[idx++];
        }
    }
    cout << s << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    while(t--){
        solve();
    }
}