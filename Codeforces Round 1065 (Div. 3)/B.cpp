#include <bits/stdc++.h>
using namespace std;

int intabs(int n) {
    if (n >= 0) return n;
    return -n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if ((1 < i && i < n) && a[i] == -1) a[i] = 0;
        }
        if (a[1] == -1 && a[n] == -1) {
            a[1] = 0;
            a[n] = 0;
        } else if (a[1] == -1) {
            a[1] = a[n];
        } else if (a[n] == -1) {
            a[n] = a[1];
        }
        cout << intabs(a[n] - a[1]) << '\n';
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << '\n';
    }
}
