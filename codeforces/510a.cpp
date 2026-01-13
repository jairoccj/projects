#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int linhas, n; cin >> linhas >> n;


    bool dir = true;
    for(int i=0; i<linhas; i++){
        if(i%2==0){
            for(int i=0; i<n; i++){
                cout << '#';
            }
            cout << '\n';
        }
        else{
            if(dir){
                for(int i=0; i<n-1; i++){
                    cout << '.';
                }
                cout << '#';
                cout << '\n';
            }
            else{
                cout << '#';
                for(int i=0; i<n-1; i++){
                    cout << '.';
                }
                cout << '\n';
            }
            dir = !dir;
        }
    }
}

signed main(){
    fastio;
    solve();
}