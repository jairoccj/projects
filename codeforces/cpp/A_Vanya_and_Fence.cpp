#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n, h; cin >> n >> h;

    long long sol = 0;
    for(int i=0; i<n; i++){
        int num; cin >> num;

        if(num<=h)sol++;
        else sol += 2;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}