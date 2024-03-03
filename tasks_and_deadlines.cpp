#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    sort(vec.begin(), vec.end());
    ll time = 0;
    ll reward = 0;
    for (int i = 0; i < n; i++)
    {
        time += vec[i].first;
        reward += (vec[i].second - time);
    }
    cout << reward << endl;
    return 0;
}