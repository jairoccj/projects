#include <bits/stdc++.h>
using namespace std;

int main() {
    int contador = 0;
    for (int i=0 ; i<100 ; i++){
        int nota1, nota2, nota3, nota4, nota5;
        cin >> nota1 >> nota2>>nota3>>nota4>>nota5;
        int media = (nota1+nota2+nota3+nota4+nota5)/5;
        if (media>=700){
            contador++;
        }
    }
    cout << contador << "\n";
}