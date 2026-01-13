#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    set<ll> s;

    for(int i=0; i<4; i++){
        ll num; cin >> num;
        s.insert(num);
    }

    cout << 4-s.size() << '\n';
}

signed main(){
    fastio;
    solve();
}