#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

// COMPLEXIDADE DO CÓDIGO: O(n**3) pois no pior caso, teríamos que percorrer toda a matriz, que já é O(n**2), e para cada elemento, percorrer todas as torres, que pode ser igual à n.

void solve(){
    int n, torres; cin >> n >> torres;
    vector<vector<int>> matriz(n, vector<int>(n));
    vector<tuple<int, int, int>> array_tuplas(torres);

    for(auto &t : array_tuplas){
        int x, y, r; cin >> x >> y >> r;
        t = {x, y, r};
    }

    for(int i=0; i<torres; i++){
        matriz[get<1>(array_tuplas[i])][get<0>(array_tuplas[i])] = 1; 
    }

    int sol = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            bool flag = true;
            if(matriz[i][j] != 1){
                for(tuple tupla : array_tuplas){
                    double dist = sqrt(abs(
                        pow(get<0>(tupla) - j, 2) + pow(get<1>(tupla) - i, 2)
                    ));
                    if(dist <= get<2>(tupla)){
                        flag = false;
                        break;
                    }
                }
                if(flag) sol++;
            }
        }
    }
    cout << sol << '\n';
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}