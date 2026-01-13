#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long


void solve(){
    string s; cin >> s;

    string nova = "";

    for(int i=0; i<s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 2;
        }
        else{
            nova = s.substr(i);
            break;
        }
    }

    string sol = "";
    for(int i=0; i<nova.size(); i++){
        if(nova[i]=='W' && nova[i+1]=='U' && nova[i+2]=='B'){
            i += 2;
            sol += ' ';
        }
        else{
            sol += nova[i];
        }
    }


    string res = "";
    for(int i=0; i<sol.size(); i++){
        if(sol[i]==' ' && sol[i+1]==' '){
            continue;
        }
        else res += sol[i];
    }

    cout << res << '\n';
}

signed main(){
    fastio;
    solve();
}