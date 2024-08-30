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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifdef Clion
    freopen("input.txt", "r", stdin);
    freopen("outputt.txt", "w", stdout);
#endif
}

const int N = 3e6 + 5;

struct Exam {
    int id, cost;

    Exam(int i, int c) : id(i), cost(c) {}
};

struct Compare {
    bool operator()(Exam &a, Exam &b) {
        return (a.cost < b.cost);
    }
};

vector<vector<Exam>> exm(N);
vector<int> ans(200007);
priority_queue<Exam, vector<Exam>, Compare> pq;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t, c;
        cin >> t >> c;
        exm[t].push_back(Exam(i, c));
    }
    int d = 0;
    for (int i = 1; i < N; i++) {
        if (sz(exm[i]) == 0 && pq.empty()) continue;
        for (auto x: exm[i]) {
            pq.push(Exam(x.id, x.cost - d));
        }
        d++;
        auto prio = pq.top();
        pq.pop();
        ans[prio.id] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    zo7le2a();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
