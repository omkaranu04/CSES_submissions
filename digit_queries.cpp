#include <iostream>
#include <cmath>
using namespace std;

const long long n = 1e18;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long q;
    cin >> q;

    while (q--)
    {
        long long int k;
        cin >> k;
        long long start = 1;
        long long digit = 1;
        while (k - 9 * start * digit >= 0)
        {
            k -= 9 * start * digit;
            start *= 10;
            digit++;
        }
        long long num = (--start) + k / digit;
        long long rem = k % digit;
        if (rem == 0)
            cout << num % 10 << endl;
        else
        {
            num++;
            string s = to_string(num);
            cout << s[rem - 1 * 1LL] << endl;
        }
    }

    return 0;
}
