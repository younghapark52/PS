#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, m;
    cin >> h >> m;
    if (m >= 45) {
        m -= 45;
    } else {
        h -= 1;
        m += 15;
    }
    if (h < 0) h += 24;
    cout << h << ' ' << m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
