#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string original; cin >> original;
    string numero = original;
    char primeiro = '9';
    for (int i : numero){
        if (i > '0' && i < primeiro){
            primeiro = i;
        }
    }

    size_t posicao = numero.find(primeiro);

    numero.erase(numero.begin() + posicao);
    sort(numero.begin(), numero.end());

    cout << original << "\n";

    cout << primeiro;
    for ( char c : numero) cout << c;
    cout << "\n";
}