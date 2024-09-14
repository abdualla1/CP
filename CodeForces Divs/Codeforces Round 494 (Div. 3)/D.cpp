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
void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < k; i++) {
        int q;
        cin >> q;
        int ans = 0;
        int temp = q;

        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            int num = it->first;
            int freq = it->second;
            int  x = min(temp / num, freq);
            temp -= (num * x);
            ans += x;
            if (temp == 0) break;
        }
        cout << (temp == 0 ? ans : -1) << endl;
    }


}

signed main() {
    zo7le2a();
    int t = 1;
    //  cin >>t;
    while (t--) {
        solve();
    }
}