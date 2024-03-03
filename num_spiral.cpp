#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int y, x;
        cin >> y >> x;
        long long int maxi = max(x, y);
        long long int sq = (maxi - 1) * (maxi - 1);
        if (x > y)
        {
            if (maxi % 2 == 0)
            {
                cout << sq + y << endl;
            }
            else
            {
                cout << (maxi * maxi) - y + 1 << endl;
            }
        }
        else
        {
            if (maxi % 2 == 0)
            {
                cout << (maxi * maxi) - x + 1 << endl;
            }
            else
            {
                cout << sq + x << endl;
            }
        }
    }
    return 0;
}