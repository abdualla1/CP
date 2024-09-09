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
int n,m,k;
bool valid(int a,int b){
    return max(a-k,0) <= b && b <= a + k;
}
void solve(){
    cin >> n >> m>>k;
    vector<int> ap(n),cap(m);
    for(auto &i:ap) cin >> i;
    for(auto &i:cap) cin >> i;
    sort(all(ap)); sort(all(cap));
    int cnt= 0;

    for(int i = 0,j=0; i < n && j < m;){
        if(valid(ap[i],cap[j])){
            i++;
            j++;
            cnt++;
        }else if(ap[i] > cap[j]){
            j++;
        }else{
            i++;
        }
    }
    cout << cnt << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
  //  cin >>t;
    while(t--){
        solve();
    }
}