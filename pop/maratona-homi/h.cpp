#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vll vector<long long>

void solve(){
    int n; cin >> n;

    vi v(n);
    for(int &i : v) cin >> i;

    set<int> s(v.begin(), v.end());

    cout << s.size() << '\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}