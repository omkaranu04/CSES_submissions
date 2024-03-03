#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    multiset<int> prices;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        prices.insert(h);
    }
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        auto it = prices.upper_bound(k);
        if (it == prices.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            prices.erase(it);
        }
    }
}