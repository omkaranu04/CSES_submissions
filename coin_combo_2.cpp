#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    int dp[n][x + 1];
    for (int i = 0; i <= x; i++)
    {
        if (i % c[0] == 0)
            dp[0][i] = 1;
        else
            dp[0][i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (j < c[i])
                dp[i][j] = dp[i - 1][j] % mod;
            if (j >= c[i])
                dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - c[i]] % mod) % mod;
        }
    }

    cout << dp[n - 1][x] << endl;
    return 0;
}