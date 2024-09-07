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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    set<int> st;
    for(int i =0 ;i < n; i++){
        cin >> v[i];
        if(!st.count(v[i]) && sz(st) < k)
            st.insert(v[i]);
    }
   if(sz(st) == k){
       yes
       for(auto &i:st)
           cout << find(all(v),i) - v.begin() + 1 << ' ';
       cout << endl;
    }else
       no
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}