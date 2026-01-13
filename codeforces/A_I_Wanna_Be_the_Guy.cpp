#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    set<int> mySet;

    int x; cin >> x;
    for(int i=0; i<x; i++){
        int num; cin >> num;
        mySet.insert(num);
    }

    int y; cin >> y;
    for(int i=0; i<y; i++){
        int num; cin >> num;
        mySet.insert(num);
    }

    if(mySet.size() == n) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}

signed main(){
    fastio;
    solve();
}