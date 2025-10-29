#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define vull vector<unsigned long long>

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vull v(n);
        for(auto &x : v) cin >> x;
        vull precos(n);
        for(auto &x : precos) cin >> x;

        vull v2(v);

        ull sol1 = 0;

        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                sol1+=precos[i];
                v[i] = v[i-1]+1;
            }
        }

        ull sol2 = 0;

        for(int i=n-1; i>1; i--){
            if(v2[i]<v2[i-1]){
                sol2+=precos[i-1];
                v2[i-1] = v2[i]-1;
            }
        }

        ull sol = min(sol1, sol2);

        cout << sol << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}