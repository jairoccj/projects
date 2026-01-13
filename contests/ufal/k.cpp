#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long
#define vll vector<unsigned long long>
#define vs vector<string>

void solve(){
    ll n, l, r; cin >> n >> l >> r;
    vll v(n);
    v[l-1] = n;

    ll num = n-l+1;
    for(ll i=0; i<l-1; i++){
        v[i] = num;
        num++;
    }

    num = 1;
    for(ll i=l; i<n-r+1; i++){
        v[i] = num;
        num++;
    }

    num = n-r+1;
    for(ll i=n-r+1; i<n; i++){
        v[i] = num;
        num--;
    }

    for(auto x : v) cout << x << ' ';

}

signed main(){
    fastio;
    solve();
}