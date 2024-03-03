#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll min_time, ll max_time, ll no_of_prod, vector<ll> &k)
{
    while (min_time < max_time)
    {
        ll mid_time = ((max_time + min_time) / 2);

        ll curr_no_of_prod = 0;

        for (auto it : k)
        {
            curr_no_of_prod += mid_time / it;
            if (curr_no_of_prod >= no_of_prod)
                break;
        }

        if (curr_no_of_prod >= no_of_prod)
        {
            max_time = mid_time;
        }
        else
        {
            min_time = mid_time + 1;
        }
    }

    return min_time;
}
int main(int argc, char const *argv[])
{
    int n, t;
    cin >> n >> t;
    vector<ll> k(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    ll max_time = t * (*max_element(k.begin(), k.end()));
    ll min_time = 0;
    cout << solve(min_time, max_time, t, k) << endl;
    return 0;
}