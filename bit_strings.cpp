#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int bin_exp(long long int a, long long int x)
{
    if (x == 0)
        return 1;
    long long int temp = bin_exp(a, x / 2);
    if (x % 2 == 0)
        return ((temp * 1LL * temp) % mod);
    else
        return ((temp * 1LL * temp * 1LL * a) % mod);
}
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    cout << bin_exp(2, n) << endl;
    return 0;
}