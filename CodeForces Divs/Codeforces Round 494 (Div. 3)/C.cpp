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
#define double long double
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n+1);
    a[0]=0;
    for(int i = 1;i <=n;i++){
        cin >> a[i];
        a[i] += a[i-1];
    }

    double res = 0.0;
    for(int i =k;i<=n;i++){
        for(int j = i;j<=n;j++){

            double sum = ((a[j] - a[j-i]) * 1.0);
            double temp = sum / i;
            res = max(res,temp);
        }
    }
    cout << fixed << setprecision(15) << res << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
  //  cin >>t;
    while(t--){
        solve();
    }
}