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
    int n,m;
    cin >> n >> m;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        auto it = s.upper_bound(x);
        if(it == s.begin()){
            cout << -1 << endl;
        }else{
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
}
signed main() {
    zo7le2a();
    int t = 1;
  //  cin >>t;
    while(t--){
        solve();
    }
}