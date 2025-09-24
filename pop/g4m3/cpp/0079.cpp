#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero; cin >> numero;

    string palavra; cin >> palavra;
    bool borboleta = false;

    for (char c : palavra){
        if (c == 'B'){
            borboleta = true;
            break;
        }
    }
    if (borboleta){
        cout << "Borboletas Sempre Voltam\n";
    }else{
        cout << "Nem Sempre\n";
    }
}