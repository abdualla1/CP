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

void zo7le2a() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
ll findGCD(vector<ll>& arr) {
    ll gcd = arr[0];
    for (const ll &val : arr) {
        gcd = __gcd(gcd, val);
    }
    return gcd;
}
void solve() {
    ll n, k;
    ll mex = 0;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &i: arr)cin >> i;
    sort(all(arr));
    ll gcd = findGCD(arr);

    if (n == 1) {
        if (k <= arr[0]) return void(cout << k - 1 << endl);
        else return void(cout << k << endl);
    }
    if (gcd == 1)return void(cout << k - 1 + n << endl);
    else {
        ll t = 0;
        for (int i = 0; i < n; i++) {
            if (i * gcd <= k - 1 + t) {
                t++;
            } else break;
            mex++;
        }
        cout << k - 1 + mex << endl;
    }


}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}