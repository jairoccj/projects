#include <bits/stdc++.h>
using namespace std;

bool primo(int soma) {
    int divisores = 0;

    for(int i=1 ; i<=soma; i++){
        if(soma%i == 0){
            divisores++;
        }
    }
    if(divisores == 2){
        return true;
    }
    return false;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int soma = num1 + num2;

    if (primo(soma)){
        cout << "Xau\n";
    }else{
        cout << "Xi\n";
    }
}