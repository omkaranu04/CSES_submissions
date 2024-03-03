#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll answer = 0;
    ll sum = 0;
    ll i = 0, j = 0;
    while (i < n)
    {
        sum += a[i];
        while (sum >= x)
        {
            if (sum == x)
                answer++;
            sum -= a[j];
            j++;
        }
        i++;
    }
    cout << answer << endl;
    return 0;
}