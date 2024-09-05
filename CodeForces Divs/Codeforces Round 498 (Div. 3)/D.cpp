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
   int n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    int res = 0;
    char a,b,c,d;
    for(int i=0;i<n/2;i++)
    {
        a=s1[i];
        b=s1[n-i-1];
        c=s2[i];
        d=s2[n-i-1];
        if((a == c && b == d) || (a == d && b == c) || (a == b && c == d))continue;
        else if(a == c || b == d || a == d || b == c || c == d)res++;
        else res+=2;
    }
    cout << (n%2 && s1[n/2]!=s2[n/2] ? res+1 : res) << endl;

}
signed main() {
    zo7le2a();
    int t = 1;
//    cin >>t;
    while(t--){
        solve();
    }
}