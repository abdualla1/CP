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
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> v[i][j];
            v[i][j]--;
        }
    }
    vector<int> vote(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto f: v[i]) {
            vote[f]++;
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (vote[i] > n / 2)ans.push_back(i + 1);
    }
    sort(all(ans));
    cout << sz(ans) << endl;
    for (auto i: ans)cout << i << " ";
    cout << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}