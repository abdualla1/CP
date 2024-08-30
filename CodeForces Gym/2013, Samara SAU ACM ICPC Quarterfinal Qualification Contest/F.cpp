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
ll n, p, q;
vector<int> a;

bool can(ll mid) {
    ll total = 1LL * mid * q;
    ll ans(0);
    if(p == q){
        for(int i = 0;i<n;i++){
            if(a[i] > total) return false;
        }
        return true;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > total) {
            ans += (a[i] - total) / (p - q) + ((a[i] - total) % (p - q) != 0);
            if (ans > mid) return false;
        }
    }
    return true;
}

void solve() {
    cin >> n >> p >> q;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 1e10 + 1;
    while (r - l > 1) {
        int mid = l + (r - l) / 2;
        if (can(mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
}