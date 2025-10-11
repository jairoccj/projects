#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

void solve(){
    ull n; cin >> n;

    __int128 a1 = 5;
    __int128 r = 3;
    __int128 N = n;

    __int128 an = a1 + (N-2) * r;

    __int128 sol = ((((a1 + an) * (N-1)) / 2) + 2) % 7907;


    cout << (long long)sol << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

// h 1 = 2 (+5)
// h 2 = 7 (+8)
// h 3 = 15 (+11)
// h 4 = 26 (+14)
// h 5 = 40 (+17)
// h 6 = 57 (+20)
// h 7 = 77 (+23)
// h 8 = 100 (+26)
// h 9 = 126 (+29)
// h 10 = 155