#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n, k; cin >> n >> k;
    int sol = 0;
    vi v(n);
    for(int &i : v) cin >> i;

    for(int i=0; i<n; i++){
        if(v[i]>=v[k-1] && v[i]>0) sol++;
    }

    cout << sol << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}