#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string bandeira; cin >> bandeira;

    int l = 0, contador = 0;
    set<char> s; // <- aqui, fora do for!

    for (int r = 0; r < n; r++) {
        while (s.count(bandeira[r])) {
            s.erase(bandeira[l]);
            l++;
        }
        s.insert(bandeira[r]);
        contador = max(contador, r - l + 1);
    }

    cout << contador << '\n';
}
