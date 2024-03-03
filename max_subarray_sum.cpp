#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum = a[0];
    long long int maxi = a[0];
    for (int i = 1; i < n; i++)
    {
        sum = max(a[i], sum + a[i]);
        maxi = max(maxi, sum);
    }
    cout << maxi << endl;
    return 0;
}