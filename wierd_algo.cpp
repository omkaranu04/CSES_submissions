#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    vector<long long int> a;
    a.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            a.push_back(n);
        }
        else
        {
            n = 3 * n + 1;
            a.push_back(n);
        }
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}