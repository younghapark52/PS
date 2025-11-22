#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << a + b << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
