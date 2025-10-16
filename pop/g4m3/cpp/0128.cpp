#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve(){
    int impares=0;
    for(int i=0; i<25; i++){
        int num; cin >> num;
        if(num%2!=0) impares++;
    }
    int pares = 25 - impares;
    if(impares >= 5 && impares%2==1 && pares!=2) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

// 1 0 0 0 0
// 0 1 0 0 0
// 0 0 1 0 0    5, 20
// 0 0 0 1 0
// 0 0 0 0 1

// 0 0 1 0 0
// 0 0 0 1 0
// 1 0 1 0 1     7, 18
// 0 1 0 0 0
// 0 0 1 0 0

// 1 1 1 1 1 
// 1 0 0 0 0
// 1 0 0 0 0    9, 16
// 1 0 0 0 0
// 1 0 0 0 0

// 0 0 1 1 1
// 1 0 0 0 0
// 1 0 1 0 1      11, 14
// 0 0 0 0 1
// 1 1 1 0 0

// 1 0 1 0 1
// 0 0 1 0 0
// 1 1 1 1 1    13, 12
// 0 0 1 0 0
// 1 0 1 0 1 

// 1 0 0 1 1
// 0 1 1 0 1
// 0 1 0 1 1     15, 10
// 1 0 1 1 0
// 1 1 1 0 0

// 0 1 1 1 0
// 1 0 1 0 1
// 1 1 1 1 1     17, 8
// 1 0 1 0 1
// 0 1 1 1 0

// 0 1 1 1 0
// 1 1 1 1 1
// 1 1 1 1 1     21, 4
// 1 1 1 1 1
// 0 1 1 1 0



// 23, 2 NOOOOO

// 1 1 1 1 1 
// 1 1 1 1 1
// 1 1 1 1 1     25, 0
// 1 1 1 1 1
// 1 1 1 1 1