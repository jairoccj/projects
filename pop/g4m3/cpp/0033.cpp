#include <iostream>
using namespace std;
// eu sei que podia fazer com array mas ainda não estudei
// por favor não julgar ok


int main(){
    string frase;
    cin >> frase;

    int contador[5] = {0};

    for(char letra : frase){
        if(letra >= 'B' && letra <= 'F'){
            contador[letra - 'B']++;
        }
    }

    int maior = 0;
    for (int i=1;i<5;i++){
        if (contador[i] > contador[maior]){
            maior = i;
        }
    }

    cout << char('B' + maior) << "\n";
}

