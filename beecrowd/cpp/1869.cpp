#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

string base32(ull n){
    string sol = "";
    while(n != 0){
        ull num = n % 32;
        char letra;
        if(num > 9 && num < 32){
            letra = 'A' + num - 10;
        }
        else{
            letra = '0' + num;
        }
        sol.insert(0, 1, letra);
        n = n/32;
    }
    return sol;
}

void solve(){
    while(true){
        ull n; cin >> n;
        if(n != 0) cout << base32(n) << '\n';
        else{
            cout << '0' << '\n';
            return;
        }
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}

// 0 1 2 3 4 5 6 7 8 9 (10) + 22
// a b c d e f g h i j (20) + 12
// k l m n o p q r s t (30) + 2
// u v (32)