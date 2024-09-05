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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n) , a2(n);

    for (auto &i: a)cin >> i;
    a2 = a;
    sort(rall(a2));
    vector<int> freq(2005,0);
    int sum = 0;
    for(int i =0;i<k;i++){
        freq[a2[i]]++;
        sum+=a2[i];
    }
    int cnt = 0, f=0;
    cout << sum << endl;
    for(int i =0;i<n && f < k-1;i++){
        cnt++;
        if(freq[a[i]]){
            cout << cnt << " ";
            freq[a[i]]--;
            cnt = 0;
            f++;
            if(f == k-1){
                cnt = i + 1;
                break;
            }
        }
    }
    cout << n-cnt << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}