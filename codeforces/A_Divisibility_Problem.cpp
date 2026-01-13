#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll t; cin >> t;

    while(t--){
        ll a, b; cin >> a >> b;
        if(a%b==0) cout << 0 << '\n';
        else cout << b - a % b << '\n';
    }
}

signed main(){
    fastio;
    solve();
}