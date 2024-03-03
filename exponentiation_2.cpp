#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll bin_exp(ll a, ll b, ll mod)
{
    if (b == 0)
        return 1;
    ll ans = bin_exp(a, b / 2, mod);
    if (b % 2 == 0)
        return (ans * 1LL * ans) % mod;
    else
        return ((ans * 1LL * ans) % mod * a % mod) % mod;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ll mod = 1e9 + 7;
    while (n--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll temp = bin_exp(b, c, mod - 1);
        cout << bin_exp(a, temp, mod) << endl;
    }
    return 0;
}