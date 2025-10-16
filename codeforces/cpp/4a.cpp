#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int num; cin >> num;

    if(num%2==0 && num>=4) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}