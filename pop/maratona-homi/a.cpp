#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int n; cin >> n;
    vi v(n);
    for(int &i : v) cin >> i;

    sort(v.begin(), v.end());

    int l=0, r=1;
    int sol = 0;
    while(r<n){
        if(v[l] * 2 <= v[r]){
            l++;
            sol++;
        }
        else r++;
    }
    cout << n - sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}