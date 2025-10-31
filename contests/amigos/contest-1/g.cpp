#include <bits/stdc++.h>
using namespace std;

#ifdef oi
void debug(int i){cout << i << '\n';}
#else
void debug(int i){return;}
#endif

void solve(){
    long long n, alvo; cin >> n >> alvo;

    long long m = ceil(double(n)/2);

    if(alvo > m){
        cout << (alvo - m) * 2 << '\n';
    }
    else{
        cout << (alvo * 2) - 1 << '\n'; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}