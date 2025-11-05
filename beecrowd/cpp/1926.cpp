#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool ehPrimo(ull n){
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

bool ehGemeo(ull n){
    if(ehPrimo(n)){
        if(ehPrimo(n-2) || ehPrimo(n+2)){
            return true;
        }
    }
    return false;
}

void solve(){
    int q; cin >> q;
    while(q--){
        ull x, y; cin >> x >> y;

        ull sol = 0;

        for(int i=x; i<=y; i++){
            if(ehGemeo(i)) sol++;
        }

        cout << sol << '\n';

    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}