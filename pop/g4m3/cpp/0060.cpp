#include <bits/stdc++.h>
using namespace std;

int main(){
    //int a, b, c, d; char p;
    //cin >> a >> p >> b >> p >> c >> p >> d;
    //if ((a+b+c+d)%8 == 0) cout << "BLOCK\n";
    //else cout << "PASS\n";
    int soma = 0;
    char ponto;

    for (int i=0; i<4; i++){
        int x; cin >> x;
        soma += x;
        if (i<3){
            cin >> ponto;
        }
    }

    if (soma%8 == 0) cout << "BLOCK\n";
    else cout << "PASS\n";
}