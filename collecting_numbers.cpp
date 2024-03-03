#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> a(n);
    int index_array[n + 1];
    index_array[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        index_array[a[i]] = i + 1;
    }
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (index_array[i] < index_array[i - 1])
            count++;
    }
    cout << count << endl;
    return 0;
}