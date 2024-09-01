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
#define int ll
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto &i: v) cin >> i;
    priority_queue<int, vector<int>, greater<int>> pq(all(v));
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(2 * min(a, b));
    }
    cout << pq.top() << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}