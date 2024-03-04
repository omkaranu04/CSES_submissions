#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n, q;
    cin >> n >> q;
    vector<ll> x(n), prefix_sum(n + 1);
    prefix_sum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + x[i - 1];
    }
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }

    return 0;
}
