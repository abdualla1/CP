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

int findst(string &s) {
    if (s.empty()) return 0;
    char c = s[0];
    int maxL = 1;
    int i = 1;
    while (i < sz(s) && s[i] == c) {
        maxL++;
        i++;
    }
    return maxL;
}

int finden(const string &s) {
    if (s.empty()) return 0;
    char c = s.back();
    int maxL = 1;
    int i = sz(s) - 2;
    while (i >= 0 && s[i] == c) {
        maxL++;
        i--;
    }
    return maxL;
}

int sol(string &s, int n) {
    int l = 0, r = n - 1;
    int x = -1, y = -1;
    while (l < r) {
        char f = s[l], z = s[r];
        if (f != z) {
            if (x == -1) x = l;
            y = n - r - 1;
        }
        l++;
        r--;
    }
    if (x == -1) return 0;
    string left = s.substr(x, y - x + 1);
    string right = s.substr(n - y - 1, y - x + 1);
    int cnt1 = findst(left);
    int cnt2 = finden(right);
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n - 1;
    int x = -1, y = -1;

    while (l < r) {
        char f = s[l], z = s[r];
        if (f != z) {
            if (x == -1) x = l;
            y = n - r - 1;
        }
        l++;
        r--;
    }
    if (x == -1) return void(cout << 0 << endl);

    string left = s.substr(x, y - x + 1);
    string right = s.substr(n - y - 1, y - x + 1);
//   cout << left << " " << right << endl;


    int cnt1 = findst(left);
    int cnt2 = finden(right);
    if (cnt1 == cnt2 == 1 && sz(left) == 1) return void(cout << 1 << endl);
    bool isallL = all_of(all(left), [&](char c) { return c == left[0]; });
    bool isallR = all_of(all(right), [&](char c) { return c == right[0]; });
    if (isallL || isallR) return void(cout << max(cnt1, cnt2) << endl);
    int sizemiddle = (n - y - 1) - y - 1;
    cout << sz(left) + sz(right) + sizemiddle - max(cnt1, cnt2) << endl;
//    /// e7sb el odd fel nos
//    if (cnt1 == cnt2) {
//        if (n % 2 == 0) {
//            if (sz(left) % 2 == 0) {
//                cout << sz(left) + sz(right) - cnt1 << endl;
//            } else if (sz(left) == 1) {
//                cout << sz(left) + sz(right) - cnt1 << endl;
//            } else {
//                int sizemiddle = (n - y - 1) - y - 1;
//                cout << sz(left) + sz(right) + sizemiddle - cnt1 << endl;
//            }
//
//        } else {
//            int sizemiddle = (n - y - 1) - y - 1;
//            cout << sz(left) + sz(right) + sizemiddle - cnt1 << endl;
//        }
//    } else {
//        if (n & 1) {
//            bool isallL = all_of(all(left), [&](char c) { return c == left[0]; });
//            bool isallR = all_of(all(right), [&](char c) { return c == right[0]; });
//            if (isallL || isallR) {
//                cout << max(cnt1, cnt2) << endl;
//            } else {
//                int sizemiddle = (n - y - 1) - y - 1;
//                cout << sz(left) + sz(right) + sizemiddle - max(cnt1, cnt2) << endl;
//            }
//        } else {
//            cout << sz(left) + sz(right) - max(cnt1, cnt2) << endl;
//        }
//    }
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
