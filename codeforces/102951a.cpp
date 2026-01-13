#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n; cin >> n;
    vi x(n), y(n);

    for(int &i : x) cin >> i;
    for(int &i : y) cin >> i;

    int sol = 0;

    for(int i=0; i < n; i++){
        for(int j=i+1; j<n; j++){
            int x_atual = pow((x[j] - x[i]), 2);
            int y_atual = pow((y[j] - y[i]), 2);
            int dist = x_atual + y_atual;
            sol = max(sol, dist);
        }
    }

    cout << sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}