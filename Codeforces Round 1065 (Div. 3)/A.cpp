#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int chickens = 0; chickens <= 100; chickens++) {
            for (int cows = 0; cows <= 100; cows++) {
                if (2 * chickens + 4 * cows == n) cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
