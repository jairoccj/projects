#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ull unsigned long long
const int LIMIT = 2000000; 

vector<ull> primos(LIMIT + 1);

void crivo() {
    vector<bool> is_prime(LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= LIMIT; i++) { 
        if (is_prime[i]) {
            for (int j = i * i; j <= LIMIT; j += i)
                is_prime[j] = false;
        }
    }

    int primo_atual = LIMIT;
    for (int i = LIMIT; i >= 0; i--) {
        if (i <= LIMIT && is_prime[i]) {
            primo_atual = i; 
        }
        primos[i] = primo_atual; 
    }
}

struct Status {
    ull x_min = LIMIT + 1;
    ull x_max = 0;
    ull y_min = LIMIT + 1;
    ull y_max = 0;
};

ull menor_perimetro(struct Status stats) {
    ull largura = stats.x_max - stats.x_min;
    ull altura = stats.y_max - stats.y_min;

    ull largura_primo = primos[largura];
    ull altura_primo = primos[altura];

    return 2 * (largura_primo + altura_primo);
}

void solve() {
    ull q;
    cin >> q;
    vector<pair<ull, ull>> v(q);
    for (auto &p : v) {
        ull x, y;
        cin >> x >> y;
        p.first = x;
        p.second = y;
    }

    sort(v.begin(), v.end());

    vector<ull> p_l(q, 0);
    Status stats_l;
    
    stats_l.x_min = stats_l.x_max = v[0].first;
    stats_l.y_min = stats_l.y_max = v[0].second;

    for (ull i = 2; i <= q - 3; i++) {
        auto formiga = v[i - 1];
        
        stats_l.x_min = min(stats_l.x_min, formiga.first);
        stats_l.x_max = max(stats_l.x_max, formiga.first);
        stats_l.y_min = min(stats_l.y_min, formiga.second);
        stats_l.y_max = max(stats_l.y_max, formiga.second);

        p_l[i] = menor_perimetro(stats_l);
    }

    vector<ull> p_r(q, 0);
    Status stats_r;

    stats_r.x_min = stats_r.x_max = v[q - 1].first;
    stats_r.y_min = stats_r.y_max = v[q - 1].second;

    for (ull i = q - 2; i >= 3; i--) {
        auto formiga = v[i];

        stats_r.x_min = min(stats_r.x_min, formiga.first);
        stats_r.x_max = max(stats_r.x_max, formiga.first);
        stats_r.y_min = min(stats_r.y_min, formiga.second);
        stats_r.y_max = max(stats_r.y_max, formiga.second);

        p_r[i] = menor_perimetro(stats_r);
    }

    ull sol = ULLONG_MAX;

    for (ull i = 2; i <= q - 3; i++) {
        ull perimetro_atual = p_l[i] + p_r[i + 1];
        sol = min(sol, perimetro_atual);
    }

    cout << sol << '\n';
}

int main() {
    fastio;
    crivo();
    solve();
}