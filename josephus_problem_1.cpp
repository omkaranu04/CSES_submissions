// VERY GOOD USE OF QUEUE
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int n_1 = n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }
    bool flag = false;
    while (!q.empty())
    {
        int tbr = q.front();
        q.pop();
        if (flag)
            cout << tbr << " ";
        else
            q.push(tbr);
        flag = !flag;
    }
    return 0;
}