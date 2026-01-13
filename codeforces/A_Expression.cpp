#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int a, b, c; cin >> a >> b >> c;

    int sol = a * b * c;

    sol = max(sol, (a+b)*c);
    sol = max(sol, (a*(b+c)));
    sol = max(sol, a+b+c);

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}