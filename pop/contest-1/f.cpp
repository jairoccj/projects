#include <bits/stdc++.h>
using namespace std;
#define vl vector<long long>
#define ll ll

void solve(){
    int n; cin >> n;
    string p; cin >> p;
    int sol = 0;

    for(int i=1; i<n; i++){
        set<char> set1(p.begin(), p.begin()+i);
        set<char> set2(p.begin()+i, p.end());
        set<char> inter;

        set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(inter, inter.begin()));

        sol = max(sol, (int)inter.size());
    }
    cout << sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}