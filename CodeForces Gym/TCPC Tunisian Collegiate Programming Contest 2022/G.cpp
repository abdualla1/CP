#include <bits/stdc++.h>

using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long
#define SWAP(a, b) {\
    a ^= b;\
    b ^= a;\
    a ^= b;\
}
#define sz(x) (int)x.size()
#define watch(x) cout << #x << " = " << x << endl

void zo7le2a() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
void solve() {
    int n, x;
    cin >> n >> x;
    string s, t;
    cin >> s >> t;
    int rot = x % n;
    string temp = s.substr(n - rot) + s.substr(0, n - rot);
    int cnt(0);
    for (int i = 0; i < n; i++) {
        if (temp[i] != t[i]) cnt++;

    }
    cout << cnt << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}