#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define all(_x) _x.begin(), _x.end()

int main(){
    int n; cin >> n;
    int q; cin >> q;

    vi vetor(n);
    for (int &i : vetor) cin >> i;
    sort(all(vetor));
    for (int &i : vetor) cout << i << ' ';
    cout << '\n';

    while(q--){
        int alvo; cin >> alvo;
        int sol = 0;
        
        int l=0, r = n;
        while (l < r){
            int m = (r+l) / 2;
            (vetor[m] <= alvo) ? l = m + 1 : r = m;
        }
        cout << alvo << ' ' << n-l << "\n";
    }
}