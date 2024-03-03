#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, demo;
    cin >> n;
    vector<bool> a(n + 1);
    a[0] = true;
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> demo;
        a[demo] = true;
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (a[i] == false)
        {
            cout << i << " ";
        }
    }

    return 0;
}