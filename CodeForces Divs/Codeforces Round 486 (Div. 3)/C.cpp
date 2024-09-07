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
    int k;
    cin >> k;
    vector<pair<int, pair<int, int>>> mp;
    while (k--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; i++) {
            mp.push_back({sum - a[i], {k, i}});
        }
    }
    sort(all(mp));
    for (int i = 0; i < sz(mp) - 1; i++) {
        if (mp[i].first == mp[i + 1].first && mp[i].second.first != mp[i + 1].second.first) {
            yes
            cout << mp[i].second.first + 1 << ' ' << mp[i].second.second + 1 << endl;
            cout << mp[i + 1].second.first + 1 << ' ' << mp[i + 1].second.second + 1 << endl;
            return;
        }
    }
    no
}
void solve1() {
    int k;
    cin >> k;
    map<int, set<pair<int, int>>> mp;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }
        for (int j = 0; j < n; j++) {
            mp[sum - a[j]].insert({i, j});
        }
    }

    for (auto &i : mp) {
        if (sz(i.second) > 1) {
            auto it = i.second.begin();
            auto it2 = i.second.rbegin();
            if (it->first != it2->first) {
                yes
                cout << it->first + 1 << ' ' << it->second + 1 << endl;
                cout << it2->first + 1 << ' ' << it2->second + 1 << endl;
                return;
            }
        }
    }
    no
}


signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while (t--) {
        solve();
    }
}