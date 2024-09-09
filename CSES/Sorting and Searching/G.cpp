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

void solve() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l].first + a[r].first == x)
            return void(cout << a[l].second + 1 << " " << a[r].second + 1 << endl);
        else if (a[l].first + a[r].first < x)
            l++;
        else
            r--;

    }
    cout << "IMPOSSIBLE" << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    //  cin >>t;
    while (t--) {
        solve();
    }
}