#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long

void solve(){
    int q; cin >> q;

    while(q--){
        ll x, y; cin >> x >> y;
        ll l=x, r=x*2;
        if(lcm(l, r) <= y){
            cout << l << ' ' << r << '\n';
        }
        else cout << -1 << ' ' << -1 << '\n';
    }
}

signed main(){
    fastio;
    solve();
}