#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long


void solve(){
    string s1, s2, sol; cin >> s1 >> s2 >> sol;

    vector<int> rep(150);
    for(auto &x : sol){
        rep[x]++;
    }

    vector<int> check(150);
    for(auto &x : s1){
        check[x]++;
    }
    for(auto &x : s2){
        check[x]++;
    }

    if(rep == check) cout << "YES\n";
    else cout << "NO\n";
    
}

signed main(){
    fastio;
    solve();
}