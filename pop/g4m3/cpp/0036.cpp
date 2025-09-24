#include <iostream>
using namespace std;

int main() {
    string frase;
    cin >> frase;

    for(int i=0 ; i<frase.size() ; i++){

        string copia = frase;

        for (char &letra : copia){
            letra = tolower(letra);
        }

        copia[i] = toupper(copia[i]);

        cout << copia << "\n";
    }

}