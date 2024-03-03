#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        a.push_back(make_pair(h, i + 1));
    }
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (1)
    {
        if (i < j)
        {
            if (a[i].first + a[j].first == x)
            {
                cout << a[i].second << " " << a[j].second << endl;
                break;
            }
            if (a[i].first + a[j].first > x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
            break;
        }
    }
    return 0;
}