#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0) 
#define ll unsigned long long

void solve(){
    ll q; cin >> q;

    while(q--){
        ll n, m, k; cin >> n >> m >> k;
        ll num = 0;
        if(m%k!=0){
            for(ll i=0; i<n; i++){
                for(ll j=0; j<m; j++){
                    num = num % k;
                    num++;
                    cout << num << ' ';
                }
                cout << '\n';
            }
        }
        else{
            for(ll i=0; i<n; i++){
                if(i%2==0){
                    num = 0;
                    for(ll j=0; j<m; j++){
                        num = num % k;
                        num++;
                        cout << num << ' ';
                    }
                    cout << '\n';
                }
                else{
                    num = 1;
                    for(ll j=0; j<m; j++){
                        num = num % k;
                        num++;
                        cout << num << ' ';
                    }
                    cout << '\n';
                }
            }
        }
    }
}

signed main(){
    fastio;
    solve();
}