#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long
#define vll vector<unsigned long long>
#define vs vector<string>

vector<ll> visitados_eu(10e5 * 3);
vector<ll> visitados_h(10e5 * 3);
set<ll> meu_set;
set<ll>h_set;

void dfs(vector<vector<ll>> v, ll eu){
    if(visitados_eu[eu] == 0){
        visitados_eu[eu] = 1;
        meu_set.insert(eu+1);
        for(ll i=0; i< v[eu].size(); i++){
            dfs(v, v[eu][i]-1);
        }
    }
}

void dfs2(vector<vector<ll>> v, ll h){
    if(visitados_h[h] == 0){
        visitados_h[h] = 1;
        h_set.insert(h+1);
        for(ll i=0; i< v[h].size(); i++){
            dfs2(v, v[h][i]-1);
        }
    }
}

void solve(){
    ll n, m; cin >> n >> m;

    vector<vector<ll>> v(n);

    for(int i=0; i<m; i++){
        ll x, y; cin >> x >> y;
        v[x-1].push_back(y);
    }

    ll eu, h; cin >> eu >> h;
    eu--;
    h--;
    dfs(v, eu);
    dfs2(v,h);

    set<ll> sol;
    auto it = sol.begin();
    set_intersection(meu_set.begin(), meu_set.end(), h_set.begin(), h_set.end(), inserter(sol, sol.begin()));
    if(sol.size() > 0){
        cout << "yes\n";
        cout << *sol.cbegin() << '\n';
    }
    else cout << "no\n";
}

signed main(){
    fastio;
    solve();
}