#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){ 
    int n, soma; cin >> n >> soma; //TLE
    
    int ideal = soma/2;
    int menor = soma;

    vi vetor(n);
    for (int &i : vetor) cin >> i;

    vi acumulados(n);
    acumulados[0] = vetor[0];

    for (int i=1; i<n; i++){
        acumulados[i] = acumulados[i-1] + vetor[i];    
    }

    int l=0, r=n-1, m, resultado;

    while(l<=r){
        m=(r+l)/2;
        
        resultado = abs(((soma - acumulados[m]) - acumulados[m]));

        if (resultado < menor) menor = resultado;

        if(ideal < acumulados[m]) r = m - 1;
        if(ideal > acumulados[m]) l = m + 1;
    }
    cout << menor << '\n';
}

