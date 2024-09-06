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
    cin >> n>>k;
    vector<pair<int,int>> a(n),b(n);
    for(int i =0;i <n;i++)
        cin >> a[i].first,a[i].second = i;
    b = a;
    sort(all(a));
    vector<int> ans(n);
    ans[a[0].second] = 0;
    for(int i = 1;i<n;i++){
        if(a[i].first != a[i-1].first)
            ans[a[i].second] = i;
        else
            ans[a[i].second] = ans[a[i-1].second];
    }

    while(k--){
        int u,v;
        cin >> u >> v;
        u--,v--;
        if(b[u].first > b[v].first)
            ans[u]--;
        else if(b[u].first < b[v].first)
            ans[v]--;
    }
    for(auto i : ans)
        cout << i << " ";
    cout << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}