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
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    vector<int> pref(n),suff(n);
    pref[0] = a[0];
    suff[n-1] = a[n-1];
    for (int i = 1; i < n; ++i)
        pref[i] = pref[i-1] + a[i];
    for (int i = n-2; i >= 0; --i)
        suff[i] = suff[i+1] + a[i];
    int l = 0, r = n-1;
    int res =0;
    while( l < r){
        if(pref[l] < suff[r])
            l++;
        else if (pref[l] > suff[r])
            r--;
        else
            res = pref[l++];

    }
    cout << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}