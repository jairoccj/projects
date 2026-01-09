#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n; cin >> n;

    ll i = 0;
    while(i<n-1){
        if(i%2==0) cout << "I hate that ";
        else cout << "I love that ";
        i++;
    }
    if(i%2==0) cout << "I hate it\n";
    else cout << "I love it\n";
}

signed main(){
    fastio;
    solve();
}