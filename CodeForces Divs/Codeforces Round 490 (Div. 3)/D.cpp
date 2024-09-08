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

    void solve(){
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<vector<int>> b(m);
        for(int i =0;i<n;i++){
            cin >> a[i];
            b[a[i] % m].push_back(i);
        }
        vector<pair<int,int>> E; // index wel mod
        ll ans =0;
        for(int f =0;f< n;f++){
            int i = f %m;
            while(sz(b[i]) > n/m){
                int temp = b[i].back();
                b[i].pop_back();
                E.push_back({temp, i});
            }
            while(sz(b[i]) < n/m && !E.empty()){
                auto & p = E.back();
                E.pop_back();
                b[i].push_back(p.first);
                a[p.first] += f - p.second;
                ans+= f - p.second;
            };
        }
        cout << ans << endl;
        for(auto i:a) cout << i << ' ';
        cout << endl;
    }
    signed main() {
        zo7le2a();
        int t = 1;

        while(t--){
            solve();
        }
    }