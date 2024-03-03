#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    char temp = s[0];
    int count = 1;
    int maxcount = count;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            maxcount = max(count, maxcount);
        }
        else
        {
            count = 1;
        }
    }
    cout << maxcount << endl;
    return 0;
}
