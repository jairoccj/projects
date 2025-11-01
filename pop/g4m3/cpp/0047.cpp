#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

void solve(){
    ull n; cin >> n;
    vector<vector<ull>> v;

    for(ull a=1; a<=n; a++){
        for(ull b=a; b<=n; b++){
            for(ull c=b; c<=n; c++){
                if((a*a + b*b) == c * c){
                    v.push_back({a, b, c});
                } 
            }
        }
    }

    if(v.size() == 0) cout << "nenhuma tripla\n";
    else{
        for(auto tripla : v) cout << tripla[0] << ' ' << tripla[1] << ' ' << tripla[2] << '\n';
    }

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}