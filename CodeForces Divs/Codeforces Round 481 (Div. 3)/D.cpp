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
void printV(vector<int> arr){
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}
#define int ll
void solve(){
    int n;
    cin >> n;
    vector<int>b (n),a(n);
    int ans=INT_MAX;
    for(auto &i : b) cin >> i;
    if(n<=2) return void(cout << 0 << endl);
    for(int d1 = -1;d1<2;d1++){
        for(int d2 = -1;d2<2;d2++){
            int a1 = b[0] + d1; // 23
            int a2 = b[1] + d2; // 22
            int cnt = abs(d1) + abs(d2); // 2
            a[0] = a1;
            a[1] = a2;
            for(int i = 2;i<n;i++){
                a[i] = a1 + i * (a2-a1); // 21
                if(abs(a[i] - b[i]) > 1){
                    cnt = INT_MAX;
                    break;
                }
                else if (a[i] != b[i])
                    cnt++;
            }
            ans = min(ans,cnt);
        }
    }
    cout << (ans == INT_MAX ? -1 :ans) << endl;

}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}