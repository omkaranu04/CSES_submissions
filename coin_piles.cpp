#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << "YES" << endl;
        else if (a == 0 || b == 0)
            cout << "NO" << endl;
        else if ((a + b) % 3 == 0 && (max(a, b) <= 2 * min(a, b)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}