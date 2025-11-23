#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, w, n;
    cin >> h >> w >> n;

    // n을 0-based로 변환
    n--;

    int floor = n % h + 1;  // 층
    int room = n / h + 1;   // 호수(열)

    cout << floor * 100 + room << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}
