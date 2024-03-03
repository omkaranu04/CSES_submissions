#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<pair<int, int>> dur(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dur[i].first >> dur[i].second;
    }
    sort(dur.begin(), dur.end(), comp);

    int count = 0;
    int curr_end = 0;
    for (auto ele : dur)
    {
        if (ele.first >= curr_end)
        {
            curr_end = ele.second;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
