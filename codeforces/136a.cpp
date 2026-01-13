#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> sol(n);
    for(int i=0; i<n; i++){
        sol[v[i]-1] = i+1;
    }

    for(auto x : sol){
        cout << x << ' ';
    }
    cout << '\n';
}

signed main(){
    fastio;
    solve();
}