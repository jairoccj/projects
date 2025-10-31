#include <bits/stdc++.h>
using namespace std;
#define vl vector<long long>
#define ll ll

void solve(){
    int n; cin >> n;

    vl v(n);
    for(auto &l : v) cin >> l;

    int sol = 1;

    int valor = 1;

    for(int i=1; i < n; i++){
        if(v[i-1] < v[i]){
            valor++;
        }
        else{
            valor = 1;
        }
        sol = max(sol, valor);
    }
    cout << sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}