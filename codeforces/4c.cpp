#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long


void solve(){
    int t; cin >> t;
    
    map<string, int> m;

    while(t--){
        string word; cin >> word;

        if(m[word] == 0){
            m[word] = 1;
            cout << "OK\n";
        }
        else{
            string nova = word;
            cout << nova << m[nova] << '\n';
            m[nova]++;
        }
    }
}

signed main(){
    fastio;
    solve();
}