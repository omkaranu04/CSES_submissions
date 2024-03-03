#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    map<int, int> time;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        time[a]++;
        time[b]--;
    }
    int maxi = 0;
    int max_curr = 0;
    for (auto x : time)
    {
        max_curr += x.second;
        maxi = max(max_curr, maxi);
    }
    cout << maxi << endl;
    return 0;
}