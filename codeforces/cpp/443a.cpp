#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string s; getline(cin, s);

    set<char>mySet;

    for(auto &x : s){
        if(x >= 'a' && x <= 'z') mySet.insert(x);
    }

    cout << mySet.size() << '\n';
}

signed main(){
    fastio;
    solve();
}