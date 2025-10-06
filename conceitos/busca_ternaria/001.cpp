#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n, alvo; cin >> n >> alvo;

    vi vetor(n);
    for (int &i : vetor) cin >> i;
    sort(vetor.begin(), vetor.end());

    int l=0, r = n-1;
    bool achou = false;

    while(l<=r){
        int meio1 = l + (r - l) /3;
        int meio2 = r - (r - l) / 3;
        
        if(alvo == vetor[meio1]){
            cout << vetor[meio1] << ' ' << meio1 << '\n';
            achou = true;
            break;
        }
        if(alvo == vetor[meio2]){
            cout << vetor[meio2] << ' ' << meio2 << '\n';
            achou = true;
            break;
        }
        if(alvo < vetor[meio1]) r = meio1 - 1;
        else if(alvo > vetor[meio2]) l = meio2 + 1;
        else l = meio1 + 1, r = meio2 - 1;
    }
    if(!achou) cout << alvo << " não foi encontrado.";
}