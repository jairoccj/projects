#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    int n; cin >> n;
    
    vector<long long> vx;
    vector<long long> vy;
    vector<long long> vz;

    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        vx.push_back(x);
        vy.push_back(y);
        vz.push_back(z);
    }

    long long sol_x = 0;
    long long sol_y = 0;
    long long sol_z = 0;

    for(auto &x2 : vx) sol_x += x2;
    for(auto &y2 : vy) sol_y += y2;
    for(auto &z2 : vz) sol_z += z2;
    
    if(sol_x == 0 && sol_y == 0 && sol_z == 0) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}