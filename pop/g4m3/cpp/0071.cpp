#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho; cin >> tamanho;

    vector<int> v(tamanho, 0);

    for (int &a : v) cin >> a;

    vector<int> sol(tamanho, 0);

    bool flag = false;

    
    for (int i=tamanho-1; i>= 0; i--){
        if (v[i] < 0 && flag == false){
            sol[i] = v[i] * -1;
            flag = true;
        }else if (v[i] < 0 && flag == true){
            flag = false;
            sol[i] = v[i];
        }else if (v[i] > 0 && flag == true){
            sol[i] = v[i] * -1;
        }else {
            sol[i] = v[i];
        }
    }


    for ( auto a : sol) cout << a << " ";
    cout << "\n";
}