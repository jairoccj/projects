#include <bits/stdc++.h>
using namespace std;

bool primo(int numero){
    int divisores = 0;
    for (int i=1; i<=numero; i++){
        if(numero%i==0){
            divisores += 1;
        }    
    }
    if (divisores == 2){
        return true;
    }
    return false;
}

int main() {
    int numero; cin >> numero;

    if (primo(numero-1) && primo(numero+1)){
        cout << numero << " TIA\n";
    }else{
        cout << numero << " NAH\n";
    }
}