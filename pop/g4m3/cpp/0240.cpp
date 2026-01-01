#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void virus(int atual, 
    vector<vector<int>> &adj, 
    vector<bool> &visitados, 
    vector<int> &niveis, 
    vector<int> &componente,
    int &maior){
        
        visitados[atual] = 1;
        componente.push_back(atual);
        maior = max(maior, niveis[atual]);
        for(int x : adj[atual]){
            if(visitados[x] == 0){
                virus(x, adj, visitados, niveis, componente, maior);
            }
        }
}

void solve(){
    int nos, ligacoes; cin >> nos >> ligacoes;
    
    vector<vector<int>> adj(nos);
    vector<bool> visitados(nos);

    vector<int> niveis(nos);
    for(int i=0; i<nos; i++){
        int num; cin >> num;
        niveis[i] = num;
    }

    while(ligacoes--){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> sol(nos);

    for(int i=0; i<nos; i++){
        if(visitados[i] == 0){
            vector<int> componente;
            int maior = 0;
            virus(i, adj, visitados, niveis, componente, maior);
    
            for(int j : componente){
                sol[j] = maior;
            }
        }
    }

    for(int x : sol){
        cout << x << '\n';
    }
}

signed main(){
    fastio;
    solve();
}