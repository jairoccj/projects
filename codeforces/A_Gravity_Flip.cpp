#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    ll n; cin >> n;

    vector<ll> arr(n);

    for(auto &x : arr){
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    for(auto &x : arr){
        cout << x << ' ';
    }
    cout << '\n';
}

signed main(){
    fastio;
    solve();
}