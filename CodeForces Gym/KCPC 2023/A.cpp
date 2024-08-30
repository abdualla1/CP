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

bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

vector<int> gen(int Y) {
    vector<int> res;
    for (int i = 1; i <= Y; ++i) {
        if (isPalindrome(i)) {
            res.push_back(i);
        }
    }
    return res;
}

int solv(int Y, vector<int> &a) {
    auto it = lower_bound(all(a), Y);
    if (it == a.end()) {
        return a.back();
    }
    if (it == a.begin()) {
        return a.front();
    }
    int upper = *it;
    int lower = *(it - 1);
    if (abs(Y - lower) <= abs(Y - upper))return lower;
    else return upper;

}

int N = 1000000;
vector<int> a = gen(N);

void solve() {
    int y;
    cin >> y;
    cout << solv(y, a) << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}