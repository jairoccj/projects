#include <bits/stdc++.h>
using namespace std;

int main() {
    bool flag = false;
    int casos; cin >> casos;
    for (int i=0 ; i < casos ; i++ ){
        string frase; cin >> frase;
        if (!flag && frase.find('B') != string::npos){
            flag = true;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
}