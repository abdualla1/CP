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
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> a(n),ans;
    for (auto &i: a) cin >> i;
    int l = 0, r = 0;
    while (l < n) {
      while(r<n && (a[r] < 0 || !mp[a[r]])){
          if (a[r] < 0)
              mp[abs(a[r])]++;
          r++;
      }
      ans.push_back(r-l);
        if(a[l] < 0) mp[abs(a[l])]--;
      l++;
    }
    for(auto x : ans) cout << x << " ";
    cout << endl;
}

signed main() {
    zo7le2a();
    int T = 1;
    while (T--) {
        solve();
    }
}