#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

void solve(){
    ull x, y, z;
    while(cin >> x >> y >> z){
        if( (pow(x,2) + pow(y,2) == pow(z,2) ) || ( pow(y,2) + pow(z,2) == pow(x,2) ) || ( pow(z,2) + pow(x,2) == pow(y,2) )){
            if( gcd(gcd(x, y), z) == 1) cout << "tripla pitagorica primitiva\n";
            else cout << "tripla pitagorica\n";
        }
        else cout << "tripla\n";
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}