#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        ll n; cin >> n;

        ll sol = (n-1)/2;

        if(sol <= 0) cout << 0 << '\n';
        else cout << sol << '\n';
    }
}

signed main(){
    fastio;
    solve();
}