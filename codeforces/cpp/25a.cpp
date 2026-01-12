#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int n; cin >> n;

    vector<int> pares, impares, sol;

    while(n--){
        int num; cin >> num;
        sol.push_back(num);
        if(num%2==0) pares.push_back(num);
        else impares.push_back(num);
    }

    if(pares.size() == 1) cout << distance(sol.begin(), find(sol.begin(), sol.end(), pares[0])) + 1<< '\n';
    else cout << distance(sol.begin(), find(sol.begin(), sol.end(), impares[0])) + 1<< '\n';
}

signed main(){
    fastio;
    solve();
}