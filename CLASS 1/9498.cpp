#include <bits/stdc++.h>
using namespace std;

bool between(int score, int low, int high)
{
    return ((low <= score) && (score <= high));
}

int main()
{
    int score;
    cin >> score;
    if (between(score, 90, 100))
        cout << 'A';
    else if (between(score, 80, 89))
        cout << 'B';
    else if (between(score, 70, 79))
        cout << 'C';
    else if (between(score, 60, 69))
        cout << 'D';
    else
        cout << 'F';
}
