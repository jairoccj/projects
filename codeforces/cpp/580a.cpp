#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long


void solve(){
    int n; cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int sol = 1, atual = 1;

    for(int i=1; i<n; i++){
        if(v[i] >= v[i-1]) atual++;
        else atual = 1;
        sol = max(sol, atual);
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}