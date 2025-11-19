#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sqSum = 0;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        sqSum += (num * num);
    }
    cout << sqSum % 10;
}
