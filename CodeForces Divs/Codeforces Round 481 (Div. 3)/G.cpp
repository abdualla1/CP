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
struct exam{
    int s,d,c,idx;
};
bool cmp(exam a, exam b){
        return a.d < b.d;
}
void solve(){
    int n,m;
    cin >> n >> m;
    vector<exam> E(m);
    vector<int> ans(n,0);
    for(int i =0; i <m;i++){
        cin >> E[i].s >> E[i].d >> E[i].c;
        ans[E[i].d-1] = m+1;
        E[i].idx = i+1;
    }
    sort(all(E),cmp);
    for(int i  = 0 ; i < m;i++){
        int days = E[i].c;
        int idx= E[i].idx;
        for(int j = E[i].s-1; j < E[i].d && days;j++){
            if(ans[j] == 0){
                ans[j] = idx;
                days--;
            }
        }
        if(days) return void (cout << -1 << endl);
    }
    for(auto &i:ans)
        cout << i << ' ';
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