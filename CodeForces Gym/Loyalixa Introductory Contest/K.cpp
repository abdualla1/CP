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

bool check( vector<int> &arr, int k) {
    int prefix = 0;
    for (int num: arr) {
        prefix += num;
        if (prefix== k) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    ll sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == k) return void(cout << -1 << endl);
    
    if (check(a, k)) {
        for (int num: a) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    sort(all(a));
    bool valid = false;
    while (!valid) {
        valid = check(a, k);
        if (valid) {
            break;
        }

        int pref = 0;
        int bad = -1;
        for (int i = 0; i < n; ++i) {
            pref += a[i];
            if (pref == k) {
                bad = i;
                break;
            }
        }
        bool swapped = false;
        for (int i = bad + 1; i < n; ++i) {
            if (a[i] > a[bad]) {
                swap(a[bad], a[i]);
                swapped = true;
                break;
            }
        }
        if (!swapped) {
            for (int i = 0; i < bad; ++i) {
                if (a[i] < a[bad]) {
                    swap(a[bad], a[i]);
                    swapped = true;
                    break;
                }
            }
        }
        if (!swapped) {
            cout << -1 << endl;
            return;
        }
    }

    for (int num: a) {
        cout << num << " ";
    }
    cout << endl;
}

signed main() {
    zo7le2a();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}