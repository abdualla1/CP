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
bool can(int k, int mid , int n ,vector<int> &freq){
    int cnt = 0;
    for(int i = 0; i * k <= n; i++){
        cnt += freq[min(n, i * k + mid)] - (i *k == 0 ? 0 : freq[i * k - 1]);
    }
    return cnt >= n / 2 + 1;
}
void solve(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    vector<int> freq(n+1),ans(n+1);
    for(int i = 0;i<n;i++)
        freq[a[i]]++;
    for(int i = 1;i<=n;i++)
        freq[i] += freq[i-1];
    for(int i =1; i <=n;i++){
        int l = -1,r = n+1;
        while(r-l > 1){
            int mid = l + (r-l)/2;
            if(!can(i,mid,n,freq))
                l = mid;
            else
                r = mid;
        }
        ans[i] = r;
    }
    while(q--){
        int k;
        cin >> k;
        cout << ans[k] << " ";
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
