#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int compute(vector<int> &ways, int n)
{
    if (ways[n] != 0)
        return ways[n];
    for (int dice = 1; dice <= 6; dice++)
    {
        if (n - dice >= 0)
        {
            ways[n] = (ways[n] % mod + compute(ways, n - dice) % mod) % mod;
        }
    }
    return ways[n];
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> ways(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        ways[i] = 0;
    }
    ways[0] = 1;
    // cout << compute(ways, n) << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
            {
                ways[i] = (ways[i] % mod + ways[i - j] % mod) % mod;
            }
        }
    }
    cout << ways[n] << endl;
    return 0;
}