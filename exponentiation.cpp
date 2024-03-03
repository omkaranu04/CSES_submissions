#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int bin_exp(int a, int b)
{
    if (b == 0)
        return 1;
    int res = bin_exp(a, b / 2);
    if (b & 1)
        return ((res * 1LL * res) % mod * a % mod) % mod;
    else
        return (res * 1LL * res) % mod;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << bin_exp(a, b) << endl;
    }

    return 0;
}