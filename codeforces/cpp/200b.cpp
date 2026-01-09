#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    vector<double> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i] = v[i] / 100;
    }

    double vol_laranja = 0;

    for(int i=0; i<n; i++){
        vol_laranja = vol_laranja + v[i];
    }

    vol_laranja *= 100;
    cout << fixed << setprecision(12) << vol_laranja / n << '\n';
}

signed main(){
    fastio;
    solve();
}