#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int tamanho = n*m;
    vs vetor(tamanho);

    for (string &s : vetor) cin >> s;

    int q; cin >> q;
    
    while(q--){
        string palavra; cin >> palavra;

        int l=0, r=tamanho-1;

        while(l<=r){
            int meio = (r+l)/2;
            if(vetor[meio] == palavra){
                cout << meio/m + 1 << '\n'; 
                break;
            }
            if(palavra < vetor[meio]) r = meio - 1;
            if(palavra > vetor[meio]) l = meio + 1;
        }
    }
}