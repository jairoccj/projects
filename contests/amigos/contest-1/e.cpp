#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n; cin >> n;

    vi v(n);
    for (int &i : v) cin >> i;

    int sereja = 0, dima = 0;

    for(int i=0; i<n; i++){
        int maior = max(v[0], v[v.size()-1]);
        v.erase(find(v.begin(), v.end(), maior));
        if(i%2==0){
            sereja += maior;
        }else dima += maior;
    }

    cout << sereja << ' ' << dima << '\n';
}