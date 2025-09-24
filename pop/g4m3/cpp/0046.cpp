#include <bits/stdc++.h>

using namespace std;

int main(){
    int constelacoes, max_estrelas; cin >> constelacoes >> max_estrelas;
    int comidas = 0;
    int resultado = 0;
    vector<int> estrelas; vector<int> nutricao;
    
    for (int i=0; i<constelacoes; i++){
        int estrela, valor_nutricional;
        cin >> estrela >> valor_nutricional;
        estrelas.push_back(estrela);
        nutricao.push_back(valor_nutricional);
    }



    for (int i=0; i<constelacoes; i++){
        auto it = max_element(nutricao.begin(), nutricao.end());
        int maior = *it;
        int indice = distance(nutricao.begin(), it);
        resultado += maior;
        
    }

}