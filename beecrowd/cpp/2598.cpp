#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

void solve(){
    ull q; cin >> q;
    while(q--){
        ull n, d; cin >> n >> d;
        if(n%d == 0) cout << n/d << '\n';
        else cout << n/d + 1 << '\n';
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}