#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n; cin >> n;

    ll sol = 0;

    while(n--){
        string s; cin >> s;

        if(s == "Tetrahedron") sol += 4;
        if(s == "Cube") sol += 6;
        if(s == "Octahedron") sol += 8;
        if(s == "Dodecahedron") sol += 12;
        if(s == "Icosahedron") sol += 20;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}