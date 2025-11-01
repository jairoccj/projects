#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

ull casas(ull n){
    int sol = 1;
    ull num = 1;
    while(num % n != 0){
        num = (10*num+1) % n;
        sol++;
    }
    return sol;
}

void solve(){
    ull n;
    while(cin >> n){
        cout << casas(n) << '\n';
    }

}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}