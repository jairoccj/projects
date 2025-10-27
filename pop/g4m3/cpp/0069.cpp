#include <bits/stdc++.h>
using namespace std;

// COMPLEXIDADE DA FUNÇÃO PRIMO: O(sqrt(n))
bool primo(int n){
    if(n < 2) return false;
    if(n==2) return true;
    
    for(int i=2; i < pow(n, 0.5) + 1; i++){
        if(n%i == 0) return false;
    }
    return true;
}

// COMPLEXIDADE DA FUNÇÃO PRIMO: O(sqrt(n))
void solve(){
    int n; cin >> n;
    if(primo(n-1) && primo(n+1)){
        cout << n << " TIA\n";
        return;
    }
    cout << n << " NAH\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}



// ANTIGA SOLUÇÃO 05/09/2025:
// bool primo(int numero){
//     int divisores = 0;
//     for (int i=1; i<=numero; i++){
//         if(numero%i==0){
//             divisores += 1;
//         }    
//     }
//     if (divisores == 2){
//         return true;
//     }
//     return false;
// }

// int main() {
//     int numero; cin >> numero;

//     if (primo(numero-1) && primo(numero+1)){
//         cout << numero << " TIA\n";
//     }else{
//         cout << numero << " NAH\n";
//     }
// }