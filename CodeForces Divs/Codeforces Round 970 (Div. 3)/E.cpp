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

const int M = 26;

int rec(vector<int> &pref, vector<int> &suff) {
    int total = 0, maxFreq = 0;
    for (int i = 0; i < M; i++) {
        total += pref[i] + suff[i];
        maxFreq = max(maxFreq, pref[i] + suff[i]);
    }
    return total - maxFreq;
}

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    vector<vector<int>> pref(2, vector<int>(M, 0));
    vector<vector<int>> freq(2, vector<int>(M, 0));
    vector<int> s(n + 1);
    for (int i = 1; i <= n; i++) {
        s[i] = str[i - 1] - 'a';
        freq[i % 2][s[i]]++;
    }
    int ans = INT_MAX;
    if (n & 1) {
        for (int i = 1; i <= n; i++) {
            freq[i % 2][s[i]]--;
            int even = rec(pref[i % 2], freq[1 - i % 2]);
            int odd = rec(pref[1 - i % 2], freq[i % 2]);
            ans = min(ans, even + odd);
            pref[i % 2][s[i]]++;
        }
    } else
        ans = rec(pref[0], freq[0]) + rec(pref[0], freq[1]);
    ans += (n % 2);
    cout << ans << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}