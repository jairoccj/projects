#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main(){
    int num1, num2; cin >> num1 >> num2;
    int sol = num1*num2;
    (sol % 2 != 0) ? cout << "Odd\n" : cout << "Even\n";
}