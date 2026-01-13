#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

bool all_caps(string s){
    for(auto &x : s){
        if(x >= 'A' && x <= 'Z'){
            continue;
        }
        else return false;
    }
    return true;
}

bool first_caps(string s){
    if(s[0] >= 'a' && s[0] <= 'z'){
        for(int i=1; i<s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') continue;
            else return false;
        }
        return true;
    }
    return false;
}

string capitalize(string s){
    string sol = "";

    for(auto &x : s){
        if(x == tolower(x)) sol += toupper(x);
        else sol += tolower(x);
    }

    return sol;
}

void solve(){
    string s; cin >> s;

    if(all_caps(s) || first_caps(s)){
        cout << capitalize(s) << '\n';
    }
    else cout << s << '\n';
}

signed main(){
    fastio;
    solve();
}