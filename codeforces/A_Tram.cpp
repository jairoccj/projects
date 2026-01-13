#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    int sol = 0, dentro = 0;

    for(int i=0; i<n; i++){
        int saindo, entrando; cin >> saindo >> entrando;
        dentro -= saindo;
        dentro += entrando;
        sol = max(sol, dentro);
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}