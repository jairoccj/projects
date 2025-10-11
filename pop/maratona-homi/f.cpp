#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

void solve(){
    ll n; cin >> n;
    ll q; cin >> q;

    vll v(n);
    for(ll &i : v) cin >> i;

    vll acc(n);
    partial_sum(v.begin(), v.end(), acc.begin());

    while(q--){
        ll l; cin >> l;
        ll r; cin >> r;

        if(l == r) cout << v[r-1] << '\n';
        else if(l == 1) cout << acc[r-1] << '\n';
        else cout << acc[r-1] - acc[l-2] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}