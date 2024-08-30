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
void zo7le2a(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}
const int MOD = 1e9 + 7;
const int MAXN = 1005;
vector<vector<ll>> ans(MAXN, vector<ll>(MAXN, -1));
string s;
int n;
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
ll cnt(int i, int j) {
    if(i == n) return j == 0;
    if(ans[i][j] != -1) return ans[i][j];
    ll ways(0);
    if(s[i] == '('){
        if(j+1<=n) ways = (ways + cnt(i+1,j+1)) %MOD;
     } else if (s[i] == ')'){
        if(j>0) ways = (ways + cnt(i+1, j-1)) %MOD;
    } else {
        if(j+1<=n) ways = (ways + cnt(i+1,j+1)) %MOD;
        if(j>0) ways = (ways + cnt(i+1, j-1)) %MOD;
    }
    return ans[i][j] = ways;
}

void solve() {
    cin >> n >> s;
    ans.assign(n + 1, vector<ll>(n + 1, -1));
    ll valid = cnt(0, 0);
    ll qcnt = count(all(s), '?');
    ll total = modPow(2, qcnt, MOD);
    ll invtotal = modPow(total, MOD - 2, MOD);
    cout << (valid * invtotal) % MOD << endl;
}
signed main() {
    zo7le2a();
    int t = 1;
    cin >>t;
    while(t--){
        solve();
    }
}