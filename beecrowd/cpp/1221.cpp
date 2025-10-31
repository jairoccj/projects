#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool ehPrimo(ull n){
    if(n < 2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

void solve(){
    int q; cin >> q;
    
    while(q--){
        int n; cin >> n;
        if(ehPrimo(n)) cout << "Prime\n";
        else cout << "Not Prime\n";
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}