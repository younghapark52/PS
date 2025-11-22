#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < x) cout << num << ' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
