#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, total; cin >> n >> total;
    vi qtd(n); vi valor(n);
    
    int sol = 0;

    for(int i=0; i<n; i++){
        int num; cin >> num;
        qtd[i] = num;

        cin >> num;
        valor[i] = num;
    }

    while(total--){
        int maior = *max_element(valor.begin(), valor.end());
        auto it = find(valor.begin(), valor.end(), maior);
        int indice = distance(valor.begin(), it);
        if(qtd[indice] > 0){
            qtd[indice]--;
            sol += valor[indice];
        }
        else{
            valor[indice] = 0;
            total++;
        }
    }
    cout << sol << '\n';
}