#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> pre(n);  // pre[i] = "the minimum of p_1,...,p_i"
    vector<int> suf(n);  // suf[i] = "the maximum of p_i,...,p_n"

    for (int i = 0; i < n; i++) cin >> p[i];

    // fill pre
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pre[i] = p[i];
        } else {
            pre[i] = min(pre[i - 1], p[i]);
        }
    }

    // fill suf
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            suf[i] = p[i];
        } else {
            suf[i] = max(suf[i + 1], p[i]);
        }
    }

    // if there exists some i such that pre[i-1] > suf[i], then answer is "No".
    for (int i = 1; i < n; i++) {
        if (pre[i - 1] > suf[i]) {
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
