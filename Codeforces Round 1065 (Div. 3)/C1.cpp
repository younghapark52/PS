#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int x = 0;  // 0 ^ 0 = 0 and 0 ^ 1 = 1 -> x is set to a[0]
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
        int i = n - 1;
        while (a[i] == b[i]) i--;
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
