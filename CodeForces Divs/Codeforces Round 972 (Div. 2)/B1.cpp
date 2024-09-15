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
    int n,m,q;
    cin >> n >> m >>q;
    vector<int> b(m);
    for(auto &i : b) cin >> i;
    sort(all(b));
    while(q--){
        int x;
        cin >> x;
        int k = upper_bound(all(b),x) - b.begin();
        if(k == sz(b))
            cout << n - b[m-1] << " ";
        else if(k == 0)
            cout << b.front() - 1 << " ";
        else
            cout << (b[k] - b[k-1]) / 2 << " ";
    }
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