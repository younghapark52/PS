#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    char c = s[n - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != c) cnt++;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
