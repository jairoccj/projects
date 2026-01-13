#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ll long long

ll gcd(ll  a, ll b){
    while(b){
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<ll> fatores(ll n){
    vector<ll> fatores;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            fatores.push_back(i);
            if (i * i != n) {
                    fatores.push_back(n / i);
                }
        }
    }
    sort(fatores.begin(), fatores.end());
    return fatores;
}

ll sol(vector<ll> v, ll l, ll r){
    for(int i=v.size()-1; i >= 0; i--){
            if(v[i] >= l && v[i] <=r){
                return v[i];
            }
        }
    return -1;
}

void solve(){
    ll a, b; cin >> a >> b;
    vector<ll> v = fatores(gcd(a, b));

    int q; cin >> q;
    while(q--){
        ll l, r; cin >> l >> r;
        cout << sol(v, l, r) << '\n';
    }
}

signed main(){
    fastio;
    solve();
}