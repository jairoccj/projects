#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    vector<int> dentro;
    vector<int> max;

    for(int i=0; i<n; i++){
        int q_dentro, q_max; cin >> q_dentro >> q_max;
        dentro.push_back(q_dentro);
        max.push_back(q_max);
    }

    int sol = 0;

    for(int i=0; i<n; i++){
        if(dentro[i]+2 <= max[i]){
            sol++;
        }
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}