#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string s; cin >> s;

    for(auto x : s){
        if(x == 'H' || x == 'Q' || x == '9'){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}