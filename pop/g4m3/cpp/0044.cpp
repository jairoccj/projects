#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos; cin >> casos;
    for (int i=0; i < casos; i++){
        int tamanho; cin >> tamanho;

        string palavra; cin >> palavra;

        int posicao = 0, contador = 0; 
        string yes = "yes";

        for (char letra : palavra){
            if (letra == yes[posicao]){
                posicao++;
                if (posicao == 3){
                    contador++;
                    posicao = 0;
                }
            }
        }
        cout << contador << "\n";
    }
}