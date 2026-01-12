#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0); ios::sync_with_stdio(0)
#define ll long long

void solve(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;


        string s = to_string(n);
        int non_zeroes = 0;
        int power = s.size()-1;
        vector<int> v;

        for(int i=0; i<s.size(); i++){
            if(s[i] != '0'){
                non_zeroes++;
                int num = s[i] - '0';
                v.push_back(num * pow(10,power));
            }
            power--;
        }
        
        cout << non_zeroes << '\n';
        for(auto &x : v) cout << x << ' ';
        cout << '\n';
    }
}

signed main(){
    fastio;
    solve();
}