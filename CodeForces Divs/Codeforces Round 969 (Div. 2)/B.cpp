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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
   for(auto &i : a) cin >> i;
    int mx = *max_element(all(a));
    vector<int> res;

    for (int i = 0; i < m; i++) {
        char op;
        int l, r;
        cin >> op >> l >> r;
        if (l <= mx && mx <= r) {
            if (op == '+')
                mx++;
             else if (op == '-')
                mx--;
        }
        res.push_back(mx);
    }
   for(auto &i : res)
       cout << i << " ";
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