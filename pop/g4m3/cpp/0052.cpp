#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string p; cin >> p;

    int l = 0, r = 0, sol = 0;
    
    // while(r < n){
    //     set<char> s(p.begin()+l, p.begin()+r+1);
    //     if(s.size() <= 2){
    //         sol = max(sol, r - l + 1);
    //         r++;
    //     }
    //     else{
    //         l++;
    //     }
    // }

    map<char, int> m;
    while(r<n){
        m[p[r]]++;

        while(m.size() > 2){
            m[p[l]]--;
            if(m[p[l]] == 0) m.erase(p[l]);
            l++;
        }

        sol = max(sol, r - l + 1);
        r++;
    }

    cout << sol << '\n';
}