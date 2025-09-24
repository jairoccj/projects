#include <bits/stdc++.h>
using namespace std;


int main() {
    string a, b; cin >> a >> b;

    vector<int> v1(128, 0);
    vector<int> v2(128, 0);

    for ( int c : a ) v1[c]++;
    
    for ( int c : b) v2[c]++;

    int sol = 0;
    for ( int i = 'a' ; i <= 'z' ; i++){
        sol += abs(v1[i] - v2[i]);
    }

    cout << sol/2 << "\n";
}