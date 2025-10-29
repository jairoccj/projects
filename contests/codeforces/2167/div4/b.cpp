#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>
#define vull vector<unsigned long long>



void solve(){
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        string nome1; cin >> nome1;
        string nome2; cin >> nome2;

        vi v1(200);
        vi v2(200);

        for(char c : nome1) v1[c]++;
        for(char c : nome2) v2[c]++;

        bool flag = true;

        for(int i=0; i<200; i++){
            if(v1[i] != v2[i]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    solve();
}