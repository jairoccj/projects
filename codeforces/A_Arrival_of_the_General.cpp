#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];       
    }

    int menor = 1000;
    int min_i = 0;
    for(int i=n-1; i>=0; i--){
        if(v[i] < menor){
            menor = v[i];
            min_i = i;
        }
    }

    int sol = 0;

    for(int i=min_i; i<n-1; i++){
        v[i] = v[i+1];
        v[i+1] = menor;
        sol++;
    }

    int maior = 0;
    int max_i = 0;
    for(int i=0; i<n; i++){
        if(v[i] > maior){
            maior = v[i];
            max_i = i;
        }
    }

    for(int i=max_i; i>0; i--){
        v[i] = v[i-1];
        v[i-1] = maior;
        sol++;
    }

    cout << sol << '\n';
}

signed main(){
    fastio;
    solve();
}