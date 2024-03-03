#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    multiset<int> answer;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = answer.upper_bound(x);
        if (it == answer.end())
            answer.insert(x);
        else
        {
            answer.erase(it);
            answer.insert(x);
        }
    }
    cout << answer.size() << endl;
}