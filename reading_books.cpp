#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> t(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += t[i];
    }
    if (sum <= t.back())
        cout << 2 * t.back() << endl;
    else
        cout << accumulate(t.begin(), t.end(), 0LL) << endl;
    return 0;
}