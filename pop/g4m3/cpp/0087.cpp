#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define vll vector<unsigned long long>

// COMPLEXIDADE DA FUNÇÃO FATORIAL: O(n)
ull fat(int n){
    ull sol = 1;
    for(int i=1; i<=n; i++){
        sol *= i;
    }
    return sol;
}

// COMPLEXIDADE DA FUNÇÃO SOLVE: O(n)
void solve(){
    int n; cin >> n;
    vll v(n);

    for(auto &x : v){
        int id; cin >> id;
        cin >> x;
    }

    set<ull> s(v.begin(), v.end());

    if(s.size() == n){
        cout << 0 << '\n';
        return;
    }

    sort(v.begin(), v.end());
  
    ull sol = 1;

    int mult = 1;

    for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]) mult++;
        else{
            sol *= fat(mult);
            mult = 1;
        }
    }

    sol *= fat(mult);

    cout << sol << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}