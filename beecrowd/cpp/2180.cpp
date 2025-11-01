#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool ehPrimo(ull n){
    if(n < 2) return false;
    for(ull i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

ull velocidade(ull n){
    int nums = 0;
    ull sol = 0;
    for(ull i=n; nums<10; i++){
        if(ehPrimo(i)){
            sol += i;
            nums++;
        }
    }
    return sol;
}

void solve(){
    ull n; cin >> n;

    cout << velocidade(n) << " km/h\n";
    cout << 60000000 / velocidade(n) << " h / " << (60000000 / velocidade(n)) / 24 << " d\n";
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}