#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[9];
    int maxV = -1;
    int maxIdx = -1;
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        if (a[i] > maxV) {
            maxV = a[i];
            maxIdx = i;
        }
    }
    cout << maxV << '\n'
         << maxIdx + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
