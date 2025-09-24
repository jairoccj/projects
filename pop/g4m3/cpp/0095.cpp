#include <bits/stdc++.h>
using namespace std;

int main() {
    int lances; cin >> lances;
    bool entrou = false;
    
    for (int i=0; i<lances; i++){
        int x, y; cin >> x >> y;
        if (x-11>=7 && y+11<=720 && y - 11 >= 0){
            entrou = true;
            break;
        }
    }
    if(entrou == true){
        cout << "GOL\n";
    }else{
        cout << "LANCE QUE SEGUE\n";
    }
}