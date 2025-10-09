#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    string n; cin >> n;

    int sol = 0;

    for(char c : n) if(c == '4' || c == '7') sol += 1;

    if(sol == 4 || sol == 7) cout << "YES\n";
    else cout << "NO\n";
}