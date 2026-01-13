#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    long long num, k; cin >> num >> k;

    for(int i=0; i<k; i++){
        if(num%10==0){
            num = num/10;
        }
        else{
            num--;
        }
    }

    cout << num << '\n';
}

signed main(){
    fastio;
    solve();
}