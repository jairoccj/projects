#include <bits/stdc++.h>
using namespace std;

int main() {
    int lucro = 0;

    int tamanho; cin >> tamanho;
    float* vetor = new float[tamanho];

    for (int i = 0 ; i<tamanho ; i++){
        cin >> vetor[i];
    }

    for (int i = 0 ; i<tamanho-1 ; i++){
        for (int j = i + 1; j < tamanho ; j++){
            if(vetor[j]-vetor[i] > lucro){
                lucro = vetor[j] - vetor[i];
            }
        }
    }

    delete [] vetor;

    cout << lucro << "\n";
}