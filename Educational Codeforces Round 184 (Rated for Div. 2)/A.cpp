#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < a) cnt1++;
        if (v[i] > a) cnt2++;
    }

    if (cnt1 > cnt2)
        cout << a - 1;
    else  // cnt1 < cnt2 || cnt1 == cnt2
        cout << a + 1;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
