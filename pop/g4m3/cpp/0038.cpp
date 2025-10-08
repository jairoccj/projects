#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos; cin >> casos;

    for(int i=0; i<casos; i++){
        int n, vencedor; cin >> n >> vencedor;
        int k = vencedor - 1;
        
        for(int j=0; j < n; j++){
            int num; cin >> num;
            k = (k + num) % n;

            if(k < 0) k += n;
        }

        cout << "Caso " << i+1 << ": " << k + 1 << '\n';
    }
}