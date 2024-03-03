#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i].first;
        x[i].second = i + 1;
    }
    stack<pair<ll, ll>> her;
    for (int i = 0; i < n; i++)
    {
        while (!her.empty() && (her.top().first >= x[i].first))
        {
            her.pop();
        }
        if (her.empty())
            cout << 0 << " ";
        else
            cout << her.top().second << " ";
        her.push(x[i]);
    }

    return 0;
}