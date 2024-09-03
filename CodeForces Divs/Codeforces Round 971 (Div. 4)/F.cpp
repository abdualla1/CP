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
int get(vector<int>& a,int i,int n){
    int res = (i /n) * a[n];
    if(i % n == 0) return res;
    else{
        int temp = (a[i/n +i %n] - a[i/n]);
        res += temp;
        return res;
    }
}
void solve(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> pref(n+1,0);

    for(auto &i : a) cin >> i;
    for(int i =  1;i<=n;i++)
        pref[i] = pref[i-1] + a[i-1];
    for(int i =  0;i<n;i++)
        pref.push_back(pref.back() + a[i%n]);

    while(q--){
        int l,r;
        cin >> l >> r;
        cout << get(pref,r,n) - get(pref,l-1,n) << endl;
    }
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}