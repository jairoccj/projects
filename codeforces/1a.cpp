#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    double n, m, a; cin >> n >> m >> a;

    long long sol_n = ceil(n/a);
    long long sol_m = ceil(m/a);

    long long sol = sol_n * sol_m;

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}