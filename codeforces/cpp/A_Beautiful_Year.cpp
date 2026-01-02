#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

bool sol(int num){
    string s = to_string(num);
    set<char> mySet;

    for(auto &x : s) mySet.insert(x);

    if(mySet.size() == 4)return true;
    return false;
}

void solve(){
    int n; cin >> n;

    int chute = n+1;

    while(true){
        if(sol(chute)){
            cout << chute << '\n';
            return;
        }
        chute++;
    }
}

signed main(){
    fastio;
    solve();
}