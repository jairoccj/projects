#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

/*int main() {
    int num; cin >> num;
    float raiz = pow(num, 0.5);
    
    if (raiz == round(raiz)) {
        cout << "SIM\n";
    }else{
        cout << "NAO\n";
    }
}*/

int main(){
    vi vetor(1001);
    for (int i=1; i<=1000; i++){
        vetor[i] = i*i;
    }

    int l= 0, r = 1001;
    bool sol = false;

    int alvo; cin >> alvo;
    while (l<r){
        int m = (r+l) / 2;
        if(vetor[m] == alvo){
            sol = true; 
            cout << "SIM\n";
            break;
        }
        if(vetor[m] < alvo) l = m + 1;
        if(vetor[m] > alvo) r = m ;
    }

    if(sol == false) cout << "NAO\n";
}