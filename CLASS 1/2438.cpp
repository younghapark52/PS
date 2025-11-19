#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int line = 1; line <= n; line++)
    {
        for (int rep = 0; rep < line; rep++)
            cout << '*';
        cout << '\n';
    }
}
