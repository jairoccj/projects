#include <bits/stdc++.h>
using namespace std;
#define vi vetor<int>

int main(){
    int n; cin >> n;

    int maior = 0, menor = INT_MAX;

    for(int i=0; i < n * 2; i++){
        int num; cin >> num;

        if(i%2==0){
            maior = max(maior, num);
        }else menor = min(menor, num);
    }
    int sol = menor - maior + 1;
    (sol > 0) ? cout << sol << '\n' : cout << 0 << '\n';
}