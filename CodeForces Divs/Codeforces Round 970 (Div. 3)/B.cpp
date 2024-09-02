#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    int n;
    cin >> n;
    string s; cin >> s;
    int r = sqrt(n);
    if (r * r != n) {
        return void(no);
    }
    for (int i = 0; i < r; ++i) {
        if (i == 0 || i == r - 1) {
            for (int j = 0; j < r; ++j) {
                if (s[i * r + j] != '1') {
                    return void (no);
                }
            }
        } else {
            if (s[i * r] != '1' || s[i * r + r - 1] != '1') {
                return void (no);
            }
            for (int j = 1; j < r - 1; ++j) {
                if (s[i * r + j] != '0') {
                    return void (no);
                }
            }
        }
    }
    return void(yes);
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}