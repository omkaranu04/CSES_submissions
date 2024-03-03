#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> vec;
    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << "NO SOLUTION";
    else if (n == 3)
        cout << "NO SOLUTION";
    else if (n == 4)
        cout << "2 4 1 3";
    else
    {
        for (int i = n; i > 0; i -= 2)
        {
            vec.push_back(i);
        }
        for (int i = n - 1; i > 0; i -= 2)
        {
            vec.push_back(i);
        }
        for (auto i : vec)
        {
            cout << i << " ";
        }
    }
    return 0;
}