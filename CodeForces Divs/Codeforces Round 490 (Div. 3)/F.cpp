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
const int N = 1e5 + 5;
int n, k;
vector<int> f(N), c(N), h;
vector<vector<int>> dp(510, vector<int>(6000, -1));

int rec(int crd, int p) {
    if (!crd)
        return 0;
    int &ret = dp[crd][p];
    if (~ret)
        return ret;
    ret = 0;
    for (int i = 0; i <= min(p,k); i++)
            ret = max(ret, rec(crd - 1, p - i) + h[i]);
    return ret;
}

void init() {
    for (int i = 0; i < 510; i++) {
        for (int j = 0; j < 6000; j++) {
            dp[i][j] = -1;
        }
    }
}

void solve() {
    cin >> n >> k;
    h = vector<int>(k +1 );
    for (int i = 0; i < n * k; i++) {
        int x;
        cin >> x;
        c[x]++;
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        f[x]++;
    }
    for (int i = 1; i <= k; i++) {
        cin >> h[i];
    }
    h[0] = 0;
    int ans = 0;
    init();
    for (int i = 1; i < N; i++) {
        if (f[i] && c[i]) {
            ans += rec(f[i], c[i]);
        }
    }
    cout << ans << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    //  cin >>t;
    while (t--) {
        solve();
    }
}