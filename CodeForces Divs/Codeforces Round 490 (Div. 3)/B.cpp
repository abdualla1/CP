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

vector<int> getDivisors(int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);
            if (i != n / i) {
                res.push_back(n / i);
            }
        }
    }
    sort(all(res));
    return res;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> div = getDivisors(n);

    for (auto i: div) {
            string temp = s.substr(0, i);
            reverse(all(temp));
            s = temp + s.substr(i);
    }
    cout << s << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while (t--) {
        solve();
    }
}