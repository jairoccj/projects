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

bool ehSuper(ull n){
    string str = to_string(n);
    for(auto x : str){
        ull letra = x - '0';
        if(ehPrimo(letra) == false) return false;
    }
    return true;
}

void solve(){
    ull n;
    while(cin >> n){
        if(ehPrimo(n)){
            if(ehSuper(n)) cout << "Super\n";
            else cout << "Primo\n";
        }

        else cout << "Nada\n";
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}