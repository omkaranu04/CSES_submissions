#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    set<int> s;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}