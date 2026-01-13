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

    sort(v.rbegin(), v.rend());

    int sum = accumulate(v.begin(), v.end(), 0);
    int sol = 0;
    
    for(int i=0; i<=n; i++){
        if(sol > sum){
            cout << i << '\n';
            return;
        }
        sum -= v[i];
        sol += v[i];
    }
}

signed main(){
    fastio;
    solve();
}