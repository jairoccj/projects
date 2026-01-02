#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    string num; cin >> num;

    int sol = 0;
    int tamanho = num.size();
    for(int i=0; i<tamanho-1; i++){
        if(num[i] == num[i+1]) sol++;
        else sol = 0;
        if(sol == 6){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

signed main(){
    fastio;
    solve();
}