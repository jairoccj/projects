#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int casos; cin >> casos;

    int sol = 0;

    while(casos--){
        vi v(3);
        for(int &i : v) cin >> i;

        int t = 0;

        for(int i : v) if(i == 1) t++;

        if(t > 1) sol++;
    }

    cout << sol << '\n';
}