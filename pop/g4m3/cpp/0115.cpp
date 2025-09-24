#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos; cin >> casos;

    vector<int>figurinhas;

    for (int i=0; i<casos; i++){
        int numero; cin >> numero;
        if (find(figurinhas.begin(), figurinhas.end(), numero) == figurinhas.end()){
            figurinhas.push_back(numero);
        }else{
            for (int a : figurinhas) cout << a << " ";
            cout << "\n";
        }

    }
}