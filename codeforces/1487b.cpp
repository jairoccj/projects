#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0) 
#define ll unsigned long long
#define MOD % n

void solve(){
    ll q; cin >> q;

    while(q--){
        ll n, k; cin >> n >> k;
        k--;

        long long trombadas = k / (n / 2);

        ll lugar_a = n - (k MOD);
        ll lugar_b = (k MOD);

        if(n%2==0) cout << lugar_b+1 << '\n';
        
        else{
            ll sol = (lugar_b + trombadas) MOD +1;
            cout << sol << '\n';
        }
    }    
}

signed main(){
    fastio;
    solve();
}