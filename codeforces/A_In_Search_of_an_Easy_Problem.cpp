#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    bool flag = false;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        if(num == 1){
            flag = true;
        }
    }

    if(flag) cout << "HARD\n";
    else cout << "EASY\n";

}

signed main(){
    fastio;
    solve();
}