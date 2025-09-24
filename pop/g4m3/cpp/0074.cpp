#include <bits/stdc++.h>
using namespace std;

int main() {
    int numero; cin >> numero;
    string palavra; cin >> palavra;
    bool tem_numero = false;

    for (char simbolo : palavra){
        if (simbolo >= '0' && simbolo <= '9'){
            tem_numero = true;
        }
    }

    if(tem_numero){
        cout << palavra << " " << "YES\n";
    }else{
        cout << palavra << " " << "NO\n";
    }
}