#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanho; cin >> tamanho;
    int casos; cin >> casos;

    vector<int> vetor(tamanho, 0);

    for (int &a : vetor) cin >> a;

    vector<int> soma_l(tamanho, 0);
    soma_l[0] = vetor[0];

    for (int i=1; i<tamanho; i++){
        soma_l[i] = max(soma_l[i-1], vetor[i-1]);
    }


    vector<int>soma_r(tamanho, 0);
    soma_r[tamanho-1] = vetor[tamanho-1];

    for (int i=tamanho-2; i>=0; i--){
        soma_r[i] = max(soma_r[i+1], vetor[i+1]);
    }
    soma_l[0] = 0;
    soma_r[tamanho-1] = 0;

    vector<int> sol(tamanho, 0);
    for (int i=0; i<tamanho; i++){
        sol[i] = soma_l[i] + soma_r[i];
    }
    
    for(int i=0; i<casos; i++){
        int alvo; cin >> alvo;
        cout << sol[alvo-1] << "\n";
    }
    
}