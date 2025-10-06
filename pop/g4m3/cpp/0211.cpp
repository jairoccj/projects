#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int n; cin >> n;

    vi vetor(n);

    for (auto &i : vetor) cin >> i;

    int l=0, r=0;
    int melhor = n;
    while(r<n){
        set<int> set(vetor.begin()+l, vetor.begin()+r+1);
        // cout << accumulate(set.begin(), set.end(), 0) << ' ';
        if(accumulate(set.begin(), set.end(), 0) == 6){
            melhor = min(melhor, r - l + 1);
            l++;
        }
        else{
            r++;
        }
    }
    // cout << '\n';
    cout << melhor << '\n';
}