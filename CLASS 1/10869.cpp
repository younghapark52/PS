#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl
         << a - b << endl
         << a * b << endl
         << a / b << endl
         << a % b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
