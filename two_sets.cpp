#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int totalSum = n * (n + 1) / 2;
    if (totalSum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    long long int targetSum = totalSum / 2;
    vector<long long int> set1, set2;
    for (long long int i = n; i >= 1; i--)
    {
        if (i <= targetSum)
        {
            set1.push_back(i);
            targetSum -= i;
        }
        else
        {
            set2.push_back(i);
        }
    }

    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int num : set1)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}