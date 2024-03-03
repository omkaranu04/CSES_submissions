#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n, x;
    cin >> n >> x;
    vector<long long int> p(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    long long int count = 0;
    long long int i = 0;
    long long int j = n - 1;
    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            i++;
            j--;
            count++;
        }
        else
        {
            j--;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}