#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void solve(){
    vector<vector<int>> filhos(100009);
    for(int i=0; i<100009; i++){
        filhos[i].push_back(i*2+1);
        filhos[i].push_back(i*2+2);
    }

    vector<int> pais(100009);
    for(int i=1; i<100009; i++){
        pais[i] = (i-1)/2;
    }

    int q; cin >> q;

    while(q--){
        string s; cin >> s;
        int num; cin >> num;
        if(s=="SUBALTERNOS"){
            for(auto x : filhos[num]){
                cout << x << ' ';
            }
            cout << '\n';
        }
        else{
            cout << pais[num] << '\n';
        }
    }
}

signed main(){
    fastio;
    solve();
}