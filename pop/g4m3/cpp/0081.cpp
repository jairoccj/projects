#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n; cin >> n;

    vi vetor(n);

    for(int &i : vetor) cin >> i;

    vi acumulados(n);

    partial_sum(vetor.begin(), vetor.end(), acumulados.begin());

    int maior = acumulados[n-1];

    int menor = maior;

    int ideal = menor/2;

    int l = 0, r = n;

    while(l<=r){
        int m = (r + l) / 2;
        int resultado = abs(maior - acumulados[m]*2);

        if(resultado < menor) menor = resultado;

        if(acumulados[m] == ideal){
            break;
        }

        if(ideal > acumulados[m]) l = m + 1;
        else r = m - 1;
    }
    cout << menor << '\n';
}