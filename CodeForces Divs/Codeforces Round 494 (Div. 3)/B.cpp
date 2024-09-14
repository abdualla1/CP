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
    int a,b,x;
    cin >> a >> b >> x;
    if(x&1) {
        if(a >b){
            for(int i =0; i < x/2;i++)
                cout << "01";
            for(int i = 0; i < a- (x/2);i++ )
                cout << "0";
            for(int i = 0; i < b- (x/2);i++ )
                cout << "1";
        } else {
            for(int i =0; i < x/2;i++)
                cout << "10";
            for(int i = 0; i < b- (x/2);i++ )
                cout << "1";
            for(int i = 0; i < a- (x/2);i++ )
                cout << "0";
        }
    } else {
        if(a > b){
            for(int i =0; i < x/2;i++)
                cout << "01";
            for(int i = 0; i < b- (x/2);i++ )
                cout << "1";
            for(int i = 0; i < a- (x/2);i++ )
                cout << "0";
        } else {
            for(int i =0; i < x/2;i++)
                cout << "10";
            for(int i = 0; i < a- (x/2);i++ )
                cout << "0";
            for(int i = 0; i < b- (x/2);i++ )
                cout << "1";
        }
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