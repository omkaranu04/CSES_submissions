#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    
    // APPROACH 1
    // vector<int> dp(x + 1, 1e9);

    // dp[0] = 0;

    // for (int rem_amt = 1; rem_amt <= x; rem_amt++)
    // {
    //     for (int idx = 0; idx < n; idx++)
    //     {
    //         if (rem_amt - c[idx] >= 0)
    //             dp[rem_amt] = min(dp[rem_amt], dp[rem_amt - c[idx]] + 1);
    //     }
    // }

    // cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;

    int dp[n + 1][x + 1];

    for (int i = 0; i <= x; i++)
    {
        if (i % c[0] == 0)
            dp[0][i] = i / c[0];
        else
            dp[0][i] = 1e9;
    }

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (j >= c[i])
            {
                if (dp[i][j - c[i]] != 1e9)
                {
                    dp[i][j] = min(dp[i][j], dp[i][j - c[i]] + 1);
                }
            }
        }
    }

    cout << (dp[n - 1][x] == 1e9 ? -1 : dp[n - 1][x]) << endl;
    return 0;
}
