#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n; cin >> n;

    string s; cin >> s;
    string sol = "";
    for(char &x : s){
        if(x>='A' && x<='Z') sol += x + 32;
        else sol += x;
    }

    set<char> mySet;

    for(auto &x : sol){
        mySet.insert(x);
    }

    if(mySet.size() == 26) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}