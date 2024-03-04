#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> prices(n), pages(n);
    vector<pair<int, int>> pri_pag(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> pages[i];
    }

    int dp[n + 1][x + 1];

    for (auto &i : dp)
        for (auto &j : i)
            j = 0;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < x + 1; j++)
        {
            if (j - prices[i - 1] >= 0)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - prices[i - 1]] + pages[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][x] << endl;
    return 0;
}