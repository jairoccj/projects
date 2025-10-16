#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n; cin >> n;
    int cont = 0;
    while(n--){
        vi v(3);
        for(int &i : v) cin >> i;
        int acc = accumulate(v.begin(), v.end(), 0);
        if(acc >= 2) cont++;
    }
    cout << cont << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}