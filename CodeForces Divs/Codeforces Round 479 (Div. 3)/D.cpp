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
#define int ll
int get(int x){
    int cnt = 0;
    while(x % 3 == 0){
        x /= 3;
        cnt++;
    }
    return -cnt;
}
void solve(){
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = {get(x), x};
    }

    sort(all(a));
    for(auto i: a)
        cout << i.second << " ";
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