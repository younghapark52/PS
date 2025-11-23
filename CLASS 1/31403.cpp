#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c << '\n';
    cout << stoi(to_string(a) + to_string(b)) - c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
