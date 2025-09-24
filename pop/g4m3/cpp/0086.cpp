#include <bits/stdc++.h>
using namespace std;

int main(){
    int altura; cin >> altura;
    int resultado = 2;

    if (altura==1){
        cout << 2 << "\n";
    }else{
        for (int i=2 ; i <= altura ; i++){
            resultado += (i * 3) - 1;
        }
    }

    cout << resultado << "\n";
}