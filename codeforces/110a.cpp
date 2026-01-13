#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    string num; cin >> num;

    int sortudos = 0;

    for(auto &x : num){
        if(x == '4' || x == '7'){
            sortudos++;
        }
    }

    if(sortudos == 4 || sortudos == 7) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}