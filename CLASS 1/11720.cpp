#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int sum = 0;
    for (char c : s) {
        sum += (c - '0');
    }
    cout << sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
