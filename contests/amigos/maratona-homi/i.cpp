#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

void solve(){
    ll n; cin >> n;

    string w; cin >> w;
    string sol = "";
    for(char c : w){
        if(c >= 'A' && c <= 'Z'){
            sol += c + 32;
        }else{
            sol += c;
        }
    }

    set<char> s(sol.begin(), sol.end());

    (s.size() == 26) ? cout << "YES\n" : cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}