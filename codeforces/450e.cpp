#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0) 
#define ll long long

void solve(){
    ll x, y; cin >> x >> y;
    vector<ll> v(6);
    v[0] = x;
    v[1] = y;
    for(int i=2; i<6; i++){
        v[i] = v[i-1] - v[i-2];
    }
    ll n; cin >> n;
    n--;
    n = n % 6;
    ll num = n;

    ll sol = v[num] % 1000000007;

    if(sol < 0) cout << 1000000007 + sol << '\n';
    else cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}