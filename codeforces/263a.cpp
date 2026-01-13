#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    vector<vi> v(5, vi(5));
    
    pair<int, int> par;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> v[i][j];
            if(v[i][j] == 1){
                par.first = i;
                par.second = j;
            }
        }
    }

    cout << abs(par.second - 2) + abs(par.first - 2) << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}