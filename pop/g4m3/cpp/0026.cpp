#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, c; cin >> l >> c;

    char matriz[105][105];

    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++){
            cin >> matriz[i][j];
        }
    }

    

    for (int j=0; j<c; j++){
        for (int i=0; i<l; i++){
            cout << matriz[i][j];
        }
        cout << "\n";
    }
}