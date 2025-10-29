#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define vull vector<unsigned long long>



void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vll v(n);
        for(auto &x : v) cin >> x;

        int impares=0, pares=0;

        for(auto x : v){
            if(x%2==0) pares++;
            else impares++;
        }

        if(pares==0 || impares==0){
            for(auto x : v) cout << x << ' ';
            cout << '\n';
        }

        else{
            sort(v.begin(), v.end());
            for(auto x : v) cout << x << ' ';
            cout << '\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}