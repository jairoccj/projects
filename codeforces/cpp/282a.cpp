#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n; cin >> n;
    int sol = 0;
    while(n--){
        string op; cin >> op;
        for(char l : op){
            if(l == '+') {
                sol++;
                break;
            }
            else if(l == '-'){
                sol--;
                break;
            }
        }
    }
    cout << sol << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}