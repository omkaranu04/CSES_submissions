#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    set<int> lights{0, x};

    multiset<int> gaps{x};

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        auto it1 = lights.upper_bound(p);
        auto it2 = it1;
        --it2;

        gaps.erase(gaps.find(*it1 - *it2));
        gaps.insert(p - *it2);
        gaps.insert(*it1 - p);
        lights.insert(p);

        auto ans = gaps.end();
        --ans;
        cout << *ans << " ";
    }

    return 0;
}