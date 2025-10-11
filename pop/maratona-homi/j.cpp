#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

void solve(){
    ll n; cin >> n;

    ll p; cin >> p;

    set<ll> s;

    for(int i=0; i < p; i++){
        ll num; cin >> num;
        s.insert(num);
    }

    cin >> p;
    for(int i=0; i < p; i++){
        ll num; cin >> num;
        s.insert(num);
    }

    (s.size() >= n) ? cout << "I become the guy.\n" : cout << "Oh, my keyboard!\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}