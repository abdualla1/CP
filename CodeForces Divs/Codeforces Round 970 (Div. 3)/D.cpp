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

void bfs(vector<int> &p, string &s, vector<int> &res) {
    int n = sz(p);
    vector<bool> vis(n, false);
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; ++i) {
        if (vis[i]) continue;

        set<int> st;
        int curr = i;
        int cyc = 0;

        while (!vis[curr]) {
            vis[curr] = true;
            st.insert(curr);
            if (s[curr] == '0') cyc++;
            curr = p[curr] - 1;
        }

        for (int node: st) {
            cnt[node] = cyc;
        }
    }

    res = cnt;
}

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &i: p) cin >> i;
    string s;
    cin >> s;
    vector<int> res;
    bfs(p, s, res);

    for (int i: res) {
        cout << i << ' ';
    }
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