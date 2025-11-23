#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int line = 1; line <= n; line++) {
        for (int space = 0; space < n - line; space++) cout << ' ';
        for (int star = 0; star < line; star++) cout << '*';
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
