#include <bits/stdc++.h>
using namespace std;
const int LIMIT = 1000003;
 
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
 
    vector<int> freq(LIMIT);
    for(auto x : v) freq[x]++;
 
    for(int i=LIMIT; i>=1; i--){
        int mult = 0;
        for(int j = i; j<=LIMIT; j+=i){
            mult += freq[j];
            if(mult >= 2){
                cout << i << '\n';
                return;
            }
        }
    }
}
 
signed main(){
    solve();
}