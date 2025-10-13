#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

void solve(){
    ll n, m; cin >> n >> m;
    vll v(n);
    for(ll &x : v) cin >> x;

    ll l=0, r=1;

    ll sol = 0;

    ll calc = v[0];

    while(r<n){
        while(r-l+1 > m){
            calc = calc ^ v[l];
            l++;
        }
        calc = calc ^ v[r];
        if(r-l+1 == m){
            sol = max(sol, calc);
        }
        r++;
    }

    cout << sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

// 6 3
// 10 7 6 4 10 10