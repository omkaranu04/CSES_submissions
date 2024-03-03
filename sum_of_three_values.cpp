#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
        vec[i].second = i + 1;
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        int l = 0;
        int r = n - 1;
        while (l != r)
        {
            ll target = x - vec[i].first;
            if (l != i && r != i && vec[l].first + vec[r].first == target)
            {
                cout << vec[i].second << " " << vec[l].second << " " << vec[r].second << endl;
                return 0;
            }
            else if (vec[l].first + vec[r].first < target)
            {
                l++;
            }
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}