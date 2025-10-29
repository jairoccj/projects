#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

// COMPLEXIDADE DO CÓDIGO: O(n) (ou O(t*n) mais especificamente):
// para t testes:
// criação de vetor de tamanho n
// iteração sobre o array todo de tamanho n

void solve(){
    int t, n; cin >> t >> n;
    while(t--){
        vi v(n);
        for(auto &x : v) cin >> x;

        int pares = 0, zeros = 0;

        for(auto x : v){
            if(x == 0) zeros++;
            else if(x % 2 == 0) pares++;
        }

        if(n == 1) cout << "=-)\n";
        else if (zeros == n) cout << "=-)\n";
        else if(pares == 1) cout << "=-)\n";
        else if(pares > 1) cout << "=-(\n";
        else if(zeros > 0) cout << "=-(\n";
        else cout << "=-)\n";
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}