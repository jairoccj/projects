#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n, alvo; cin >> n >> alvo;
    vi v(n);

    int count = n/2;

    int contador = 0;

    int i = 1;

    for(i; i<count; i+2){
        v[contador] = i;
        contador++;
    }

    for(int j = i; j<n-1; j+2){
        v[contador] = j;
        contador++;
    }

    cout << v[alvo-1] << '\n';
}