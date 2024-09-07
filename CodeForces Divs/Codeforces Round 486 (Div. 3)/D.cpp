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
#define  int ll
vector<int> pre() {
    vector<int> res;
    for (int i = 0; i <= 30; i++)
        res.push_back((1 << i));
    return res;
}

void solve() {
    int n;
    cin >> n;
    set<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.insert(x);
    }
    vector<int> po = pre(), res = {*v.begin()};

    for (auto &i: v) {
        for (auto &f: po) {
            int l = i - f;
            int r = i + f;
            if (v.find(l) != v.end() && v.find(r) != v.end() && sz(res) < 3)
                res = {l, r, i};
            else if (v.find(l) != v.end() && sz(res) < 2)
                res = {l, i};
            else if (v.find(r) != v.end() && sz(res) < 2)
                res = {i, r};
        }
    }
    cout << sz(res) << endl;
    for (auto &i: res) {
        cout << i << ' ';
    }
    cout << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while (t--) {
        solve();
    }
}