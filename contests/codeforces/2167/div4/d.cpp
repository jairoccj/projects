#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define vull vector<unsigned long long>

ull limit = pow(10,18);

ull sol(vull v, ull n, ull init=2){
    if(init >= limit) return -1;

    while(init < limit){
        for(ull i=0; i<n; i++){
            if(gcd(init, v[i]) == 1){
                return init;
            }
        }
        init++;
    }
    return -1;
}

void solve(){
    int t; cin >> t;
    while(t--){
        ull n; cin >> n;
        vull v(n);
        for(auto &x : v) cin >> x;

        cout << sol(v, n) << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}