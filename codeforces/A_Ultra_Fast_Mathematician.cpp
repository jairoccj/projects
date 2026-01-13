#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    string a, b; cin >> a >> b;

    string sol = "";

    for(int i=0; i<a.size(); i++){
        char num = a[i] + b[i] - '0';
        if(num == '2') num = '0';
        sol += num;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}