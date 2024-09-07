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
    string st;
    cin >> st;
    int dist = INT_MAX;
    string pair[] = {"00", "25", "75", "50"};
    int lead = 0;
    int n = sz(st);
    for (int i = 1; i < n; i++) {
        if (st[i] == '0') lead++;
        else break;
    }

    for (auto s: pair) {
        auto pos1 = st.rfind(s[1]);
        auto pos2 = st.rfind(s[0]);

        if (s == "00") {
            for (int i = pos1 - 1; i >= 0; i--) {
                if (st[i] == '0') {
                    pos2 = i;
                    break;
                } else {
                    pos2 = -1;

                }
            }

        }
        if ((pos1 == string::npos || pos2 == string::npos)) continue;
        //same logic as solve1
        int temp = abs((n - 1) - (int)pos1) + abs((n - 2) - (int)pos2);
        if (s == "25" || s == "75") {
            temp = abs(max((n - 1) - (int)pos1, 0)) + abs(max((n - 2) - (int)pos2, 0));
            temp -= (pos2 > pos1 && pos2 != n - 1 ? -1 : 0);
            if (pos2 == 0 || pos1 == 0) temp += lead;
            if (lead == n - 2 && lead) temp = INT_MAX;
        }

        if (s == "50") {
            temp = abs(max((n - 1) - (int)pos1, 0)) + abs(max((n - 2) - (int)pos2, 0));
            temp -= (pos2 > pos1 && pos2 != n - 1 ? -1 : 0);
            if (pos2 == 0) {
                temp += lead;
                if (pos1 == lead) {
                    temp -= 1;
                }
            }
            if (lead == n - 1 && lead > 1) temp = INT_MAX;
        }
        dist = min(dist, temp);
    }

    cout << (dist == INT_MAX ? -1 : dist) << endl;
}


signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while (t--) {
        solve();
    }
}