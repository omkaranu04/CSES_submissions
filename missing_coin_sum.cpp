#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll target = 1;
    for (ll i = 0; i < n; i++)
    {
        if (x[i] > target)
            break;
        target += x[i];
    }
    cout << target << endl;
    return 0;
}
