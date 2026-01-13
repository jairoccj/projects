#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    string s; cin >> s;

    ll anton = 0, danik = 0;
    
    for(auto &x : s){
        if(x == 'A') anton++;
        if(x == 'D') danik++;
    }

    if(anton > danik) cout << "Anton\n";
    else if(danik > anton) cout << "Danik\n";
    else cout << "Friendship\n";
}

signed main(){
    fastio;
    solve();
}