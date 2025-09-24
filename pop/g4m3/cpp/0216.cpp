#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long alvo; cin >> alvo;

    vector<int> numeros(n, 0);
    for ( int &a : numeros) cin >> a;
    
    int esquerda = 0;
    long long soma = 0;

    for (int direita = 0; direita < n; direita++){
        soma += numeros[direita];
        while (soma > alvo){
            soma -= numeros[esquerda];
            esquerda++;
        }
        if (soma == alvo){
            cout << "YES\n";
            break;
        }
    }

    if (soma != alvo){
        cout << "NO\n";
    }
}