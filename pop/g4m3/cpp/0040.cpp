#include <bits/stdc++.h>
using namespace std;

int main() {
    string frase;
    while (getline(cin, frase)){
        int posicao = frase.find("How");
        if (posicao==string::npos){
            cout << "-1\n";
        }else{
            cout << posicao+1 << "\n";
        }
    }
}