#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        double m = (y2 - y1) / (x2 - x1);
        ((int)m == m) ? cout << "GOOD\n" : cout << "BAD\n";
    }
}