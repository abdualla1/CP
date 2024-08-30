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
struct gas {
    int x, p;
};
// Monotonic stack template
vector<int> find_next_smaller_price(vector<gas> &stations) {
        int m = stations.size();
    vector<int> next_smaller(m, -1); // Store indices of next smaller price gas station
    stack<int> s; // Monotonic stack to maintain next smaller prices
    // Traverse from right to left
    for (int i = m - 1; i >= 0; --i) {
        // Pop from stack until we find a station with a smaller price
        while (!s.empty() && stations[s.top()].p >= stations[i].p) {
            s.pop();
        }
        if (!s.empty()) {
            next_smaller[i] = s.top();
        }
        s.push(i);
    }
    return next_smaller;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<gas> a(m);
    for (auto &i: a)
        cin >> i.x >> i.p;
    if (m == 0) {
        if (n > k) return void(cout << -1 << endl);
        else return void(cout << 0 << endl);
    }
    int delta = a[0].x;
    for (int i = 1; i < m; i++)
        delta = max(delta, a[i].x - a[i - 1].x);
    delta = max(delta, n - a.back().x);
    if (delta > k) return void(cout << -1 << endl);
    vector<int> best = find_next_smaller_price(a);
    int nowGas = k - a[0].x;
    int cost = 0;
    for (int i = 0; i < m; i++) {
        if (nowGas >= n ) break;
        int next = best[i];
        if (~next) {
            int dist = a[next].x - a[i].x;
            if (dist > k) {
                cost += (k - nowGas) * a[i].p;
                if(i != m-1){
                    nowGas = k - ( a[i+1].x - a[i].x );
                }
                continue;
            } else {
                if (nowGas >= dist) {
                    i = next - 1;
                    nowGas -= dist;
                    continue;
                } else {
                    int need = dist - nowGas;
                    cost += need * a[i].p;
                    i = next -1;
                    nowGas = 0;
                }
            }
        } else {
            int dist = n - a[i].x;
            if (dist <= k) {
                cost += ((dist - nowGas) * a[i].p);
                break;
            }
            int temp = k - nowGas;
            cost += (temp * a[i].p);
            if(i != m-1){
                nowGas = k - ( a[i+1].x - a[i].x );
            }
            continue;
        }
    }
    cout << cost << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}