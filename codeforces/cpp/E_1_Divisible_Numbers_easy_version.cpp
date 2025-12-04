#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0) 
#define ll unsigned long long

vector<ll> divisores(ll n){
    vector<ll> d;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            d.push_back(i);
        }
        if(i*i != n) d.push_back(n/i);
    }
    return d;
}

void sol(vector<ll> v_a, vector<ll> v_b, ll a,ll b,ll c,ll d){
    ll ab = a*b;
    for(auto ad : v_a){
        for(auto bd : v_b){
            ll divisor = ad*bd;
            
            ll kx = a / divisor + 1;
            ll x = kx * divisor;
            if (gcd(x, ab) == divisor){
                if(x <= c){
                    ll s = (a*b) / divisor;
    
                    ll ky = d / s;
                    ll y = ky * s;
    
                    if(y > b && y <= d){
                        cout << x << ' ' << y << '\n';
                        return;
                    }
                }
            }
        }
    }
    cout << -1 << ' ' << -1 << '\n';
}

void solve(){
    ll q; cin >> q;

    while(q--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        
        vector<ll> v_a = divisores(a);

        vector<ll> v_b = divisores(b);

        sol(v_a, v_b, a, b, c, d);
    }
}

signed main(){
    fastio;
    solve();
}