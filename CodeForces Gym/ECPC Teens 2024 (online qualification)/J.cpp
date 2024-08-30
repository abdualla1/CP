#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T; cin >>T;
    while(T--){
         long double n,m;
        cin >> n >> m;
        long long res = ceil(sqrt((n*n) + (m*m)));
        cout << res << "\n";
    }
}
// PS THIS PROBLEM SUBMISSION IS WERID AS FUCK