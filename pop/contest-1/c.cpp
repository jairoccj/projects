#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n; cin >> n;

    vi v(n);
    for(int &i : v) cin >> i;

    int l=0, r=1;

    int sol = 1;
    int atual = 1;

    while(l<=r){
        if(v[l] < v[r]){
            atual++;
            sol = max(sol, atual);
            l++;
            r++;
        }else{
            atual = 1;
        }
        if(v[l] >= v[r]){
            l++;
            r++;
        }
    }

    cout << sol << '\n';
}