#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int count = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                count++;
                if (x / i != i)
                    count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}