#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 != 0)
                dp[i] = min(dp[i], dp[i - (temp % 10)] + 1);
            temp /= 10;
        }
    }
    cout << dp[n] << endl;
    return 0;
}