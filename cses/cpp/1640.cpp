#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n, valor; cin >> n >> valor;

    bool flag = false;

    vi vetor(n);
    for (int &i : vetor) cin >> i;

    int l = 0, r = n-1;
    while(l<r){
        if(vetor[l] + vetor[r] == valor){
            cout << l+1 << ' ' << r+1 << '\n';
            flag = true;
            break;
        }
        if(vetor[l] + vetor[r] < valor) l += 1;
        if(vetor[l] + vetor[r] > valor) r -= 1;
    }

    if(!flag) cout << "IMPOSSIBLE\n";
}