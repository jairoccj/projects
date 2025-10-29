#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define vull vector<unsigned long long>

void solve(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        vi v(4);

        for(auto &x : v) cin >> x;

        int valor = v[0];

        bool flag = true;

        for(int i=1; i<4; i++){
            if(valor != v[i]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}