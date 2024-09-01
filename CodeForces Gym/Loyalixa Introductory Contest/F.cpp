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

bool isSubSeqRec(string& s1, string& s2, int m, int n) {
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    // If last characters of two strings are matching
    if (s1[m - 1] == s2[n - 1])
        return isSubSeqRec(s1, s2, m - 1, n - 1);

    // If last characters are not matching
    return isSubSeqRec(s1, s2, m, n - 1);
}

// Wrapper function
bool isSubSeq(string& s1, string& s2) {
    int m = s1.length();
    int n = s2.length();
    if (m > n) return false;
    return isSubSeqRec(s1, s2, m, n);
}
string trns( string& t, int k) {
    string tt;
    for (char c : t) {
        tt.append(k, c);
    }
    return tt;
}
bool issubK(string& s,  string& t, int k) {
    string t_k = trns(t, k);
    return isSubSeq(t_k, s);
}

void solve() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int l = 1, r = 1;
    while (issubK(s, t, r)) {
        l = r;
        r *= 2;
    }
    l--;
    r++;
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (issubK(s, t, mid)) 
            l = mid;
         else 
            r = mid;
        
    }

    cout << l << endl;
}

signed main() {
    zo7le2a();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
