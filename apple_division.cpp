#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll min(ll a, ll b)
{
    if (a > b)
        return b;
    else
        return a;
}
void solve(ll index, vector<ll> p, vector<ll> &sub_set, ll &min_diff, ll sum, ll n)
{
    if (index == n)
    {
        if (p == sub_set)
            return;
        min_diff = min(min_diff, abs(sum - accumulate(sub_set.begin(), sub_set.end(), 0)));
        return;
    }
    sub_set.push_back(p[index]);
    solve(index + 1, p, sub_set, min_diff, sum, n);
    sub_set.pop_back();
    solve(index + 1, p, sub_set, min_diff, sum, n);
}
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> p(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    ll min_diff = INT_MAX;
    vector<ll> sub_set;
    solve(0, p, sub_set, min_diff, sum, n);
    cout << min_diff << endl;
    return 0;
}
