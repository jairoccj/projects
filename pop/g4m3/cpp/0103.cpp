#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long

ll formula(ll g, ll x){
    ll formula = x + (g +x) / (x + 1);
    return formula;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    for(int i=0; i < n; i++){
        ll b, g, c; cin >> b >> g >> c;

        ll x = b;

        ll l=0, r = b;

        while(l<=r){
            ll m1 = l + (r - l)/3;
            ll m2 = r - (r - l)/3;

            if(formula(g, m1) <= b){
                x = min(m1, x);
                r = m1 - 1;
            }
            else l = m1 + 1;

            if(formula(g, m2) <= b){
                x = min(m2, x);
                r = m2 - 1;
            }
            else l = m2 + 1;
        }
        
        x = (ll) sqrt((long double) g);

        while (x > 0 && formula(g, x - 1) <= formula(g, x)) x--;
        while (formula(g, x + 1) < formula(g, x)) x++;
        
        (formula(g, x)<=b) ? cout << "WE CAN SAVE THE WORLD\n" : cout << "WE ARE DOOMED\n";
        cout << x * c << '\n';
    }
}