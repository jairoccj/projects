#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n, target; cin >> n >> target;

    ll m;
    if(n%2==0) m = n/2;
    else m = n/2 + 1;

    if(target<=m){
        cout << target*2-1 << '\n';
    }else cout << (target-m) * 2 << '\n';
}

signed main(){
    fastio;
    solve();
}