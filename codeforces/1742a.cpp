#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long


void solve(){
    int t; cin >> t;

    while(t--){
        int a, b, c; cin >> a >> b >> c;

        vector<int> v(3);

        v[0] = a;
        v[1] = b;
        v[2] = c;

        sort(v.begin(), v.end());

        if(v[0] + v[1] == v[2]){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}

signed main(){
    fastio;
    solve();
}