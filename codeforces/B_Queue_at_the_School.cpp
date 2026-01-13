#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n, t; cin >> n >> t;
    string s; cin >> s;

    for(int i=0; i<t; i++){
        int j=0;
        while(j<n-1){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                j+=2;
            }
            else j++;
        }
    }

    cout << s << '\n';
}

signed main(){
    fastio;
    solve();
}