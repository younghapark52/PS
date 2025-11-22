#include <bits/stdc++.h>
using namespace std;

int msb_pos(int x) {
    int p = -1;
    while (x > 0) {
        p++;
        x >>= 1;
    }
    return p;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        x ^= a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        x ^= b[i];
    }
    if (x == 0) {
        cout << "Tie" << '\n';
    } else {
        int msb = msb_pos(x);
        int i = n - 1;
        while (((a[i] >> msb) & 1) == ((b[i] >> msb) & 1)) i--;
        cout << (i & 1 ? "Mai" : "Ajisai") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
