#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    vector<long long int> a;
    for (long long int i = 1; i <= n; i++)
    {
        long long int x = (i * i * 1LL * ((i * i) - 1));
        x = x / 2;
        long long int y = 4 * (i - 1) * 1LL * (i - 2);
        a.push_back(x - y);
    }
    for (auto i : a)
    {
        cout << i << endl;
    }
    return 0;
}