#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanho; cin >> tamanho;

    string bandeira; cin >> bandeira;
    int contador = 0;

    for (int i=0; i<=tamanho-1; i++){
        if (bandeira[i] != bandeira[i+1]){
            contador += 1;
        }
    }
    cout << contador << "\n";
}