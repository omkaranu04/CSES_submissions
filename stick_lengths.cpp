#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll med = a[n / 2];
    ll answer = 0;
    for (ll i = 0; i < n; i++)
    {
        answer += abs(med - a[i]);
    }
    cout << answer << endl;
    return 0;
}