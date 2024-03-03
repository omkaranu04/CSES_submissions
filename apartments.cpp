#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> a(n);
    vector<long long int> b(m);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (long long int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long int count = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[j] >= a[i] - k && b[j] <= a[i] + k)
        {
            count++;
            i++;
            j++;
        }
        else
        {
            if (b[j] > a[i] + k)
                i++;
            else
                j++;
        }
    }
    cout << count << endl;
    return 0;
}