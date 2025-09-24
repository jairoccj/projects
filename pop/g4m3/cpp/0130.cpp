#include <bits/stdc++.h>
using namespace std;


int main() {
    int tamanho; cin >> tamanho;

    vector<int> vetor(tamanho, 0), acumulados(tamanho, 0);

    for (int &a : vetor) cin >> a;

    acumulados[tamanho-1] = vetor[tamanho-1];

    for (int i=tamanho-2; i >= 0; i--){
        if (vetor[i] > acumulados[i+1]){
            acumulados[i] = vetor[i];
        }else {
            acumulados[i] = acumulados[i+1];
        }
    }
    
    int sol = 0;
    for ( int i = 0; i < tamanho - 1; i++){
        int diferenca = acumulados[i+1] - vetor[i];
        sol = max(sol, diferenca);
    }

    cout << sol << "\n";
}