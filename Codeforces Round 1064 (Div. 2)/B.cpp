#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, n;
    cin >> a >> b >> n;
    if (b * n <= a || a == b)
        cout << 1 << '\n';
    else
        cout << 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
