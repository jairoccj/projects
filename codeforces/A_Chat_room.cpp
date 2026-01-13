#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string s; cin >> s;

    string certo = "hello";
    int atual = 0;

    bool sol = false;
    for(auto x : s){
        if(x == certo[atual]) atual++;

        if(atual == 5){
            sol = true;
            break;
        }
    }

    if(sol) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}