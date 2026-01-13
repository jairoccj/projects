#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int cols, lines; cin >> cols >> lines;

    vector<vector<int>> matriz(lines, vector<int>(cols));

    for(int i=0; i<lines; i++){
        for(int j=0; j<cols; j++){
            cin >> matriz[i][j];
        }
    }

    vector<vector<int>> adj(cols);

    int ligacoes = 0;

    for(int i=0; i<lines; i++){
        for(int j=0; j<cols; j++){
            int atual = matriz[i][j]-1; 
            
            if(j > 0){
                int esq = matriz[i][j-1] - 1;
                if(count(adj[atual].begin(), adj[atual].end(), esq) == 0){
                    adj[atual].push_back(esq);
                }
            }
            
            if(j < cols-1){
                int dir = matriz[i][j+1] - 1;
                if(count(adj[atual].begin(), adj[atual].end(), dir) == 0){
                    adj[atual].push_back(dir);
                }
            }
        }
    }

    int max_lig = cols - 1;

    for(auto x : adj){
        int contador = 0;
        for(auto y : x){
            contador++;
        }
        ligacoes += max_lig - contador;
    }

    cout << ligacoes/2 << '\n';
}

signed main(){
    fastio;
    solve();
}