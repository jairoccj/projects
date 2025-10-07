#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    string s; cin >> s;

    int l=0, r=2;
    float contador=0;

    while(r < n){
        set<char> set(s.begin()+l, s.begin()+r+1);
        
        if(set.size() == 3) contador++;
        l++, r++;
        
    }
    double sol = contador/(n-2);
    
    if((int)sol == sol) cout << fixed << setprecision(1) << sol << '\n';
    else cout << sol << '\n';
}