#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

void solve(){
    int q; cin >> q;
    
    while(q--){
        int num1, num2; cin >> num1 >> num2;
        cout << gcd(num1, num2) << '\n';
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}