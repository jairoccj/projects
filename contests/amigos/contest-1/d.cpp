#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n; cin >> n;

    vi v(n);
    for (int &i : v) cin >> i;

    int soma = v[0];

    cout << soma << ' ';

    for(int i=1; i<n; i++){
        cout << v[i] - soma << ' ';
        soma = soma + (v[i] - soma);
    }
    cout << '\n';
}