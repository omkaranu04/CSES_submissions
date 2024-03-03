#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int n = s.length();
    char odd_occur;
    map<char, int> ct;
    for (auto i : s)
    {
        ct[i]++;
    }
    int even = 0, odd = 0;
    for (auto i : ct)
    {
        if (i.second & 1)
        {
            odd++;
            odd_occur = i.first;
        }
        else
            even++;
    }
    if ((n & 1 && odd > 1) || (n % 2 == 0 && odd > 0))
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string output;
    for (auto i : ct)
    {
        if (i.second % 2 == 0)
        {
            for (int j = 0; j < i.second / 2; j++)
            {
                output += i.first;
            }
        }
    }

    for (int j = 0; j < ct[odd_occur]; j++)
    {
        output += odd_occur;
    }

    for (char t = 'Z'; t >= 'A'; t--)
    {
        if (ct[t] % 2 == 0)
        {
            for (int j = 0; j < ct[t] / 2; j++)
            {
                output += t;
            }
        }
    }
    cout << output << endl;
    return 0;
}