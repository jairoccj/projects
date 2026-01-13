#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string s; cin >> s;
    
    string sol; cin >> sol;

    string test = "";

    for(int i=s.size()-1; i>=0; i--){
        test += s[i];
    }

    if(sol == test) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}