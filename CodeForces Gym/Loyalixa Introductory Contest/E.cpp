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

void solve() {
    ll n;
    cin >> n;
    int f = n % 26;
    char c = 'a' + f;
    set<char> chr = {'l', 'o', 'y', 'a', 'i', 'x'};
    cout <<(chr.find(c) != chr.end() ? "HAPPY" : "SAD") << endl;
}
signed main() {
    zo7le2a();
    int t = 1;

    while(t--){
        solve();
    }
}