#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)

void revisar(int atual,vector<int> &marc_revisao, unsigned int &contador){
    if(marc_revisao[atual] == -1){
        marc_revisao[atual] = contador;
        contador++;
    }
}

void instalar(int atual, vector<vector<int>> &adj, vector<int> &marc_instalacao, vector<int> &marc_revisao, unsigned int &contador){
    if(marc_instalacao[atual] == -1){
        marc_instalacao[atual] = contador;
        contador++;
        for(auto x : adj[atual]){
            if(marc_instalacao[x] == -1){
                instalar(x, adj, marc_instalacao, marc_revisao, contador);
            }
        }
        revisar(atual, marc_revisao, contador);
    }
}

void solve(){
    int nos, ligacoes; cin >> nos >> ligacoes;

    vector<vector<int>> adj(nos);

    while(ligacoes--){
        int u, v; cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < nos; i++) {
        sort(adj[i].begin(), adj[i].end());
    }


    // for(auto x : adj){
    //     for(auto y : x){
    //         cout << y << ' ';
    //     }
    //     cout << '\n';
    // }

    vector<int> marc_instalacao(nos, -1);
    vector<int> marc_revisao(nos, -1);
    unsigned int contador = 0;

    instalar(0, adj, marc_instalacao, marc_revisao, contador);

    for(int i=0; i<nos; i++){
        cout << marc_instalacao[i] << ' ' << marc_revisao[i] << '\n';
    }
}

signed main(){
    fastio;
    solve();
}