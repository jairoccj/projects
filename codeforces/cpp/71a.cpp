#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n; cin >> n;
    while(n--){
        string w; cin >> w;
        if(w.size()<=10) cout << w << '\n';
        else{
            int size = w.size() - 2;
            cout << w[0] << size << w[w.size()-1] << '\n';
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}