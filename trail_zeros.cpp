#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    long long int count = 0;
    long long int a = 5;
    while (n > 0)
    {
        count += n / 5;
        n = n / 5;
        a = a * 5;
    }
    cout << count << endl;
    return 0;
}