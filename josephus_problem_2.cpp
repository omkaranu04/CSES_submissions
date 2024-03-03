// LET'S SEE IF I CAN MAKE SMART USE OF QUEUE
// USING GOL GOL PROPERTY OF QUEUE
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }
    while (!q.empty())
    {
        for (int i = 0; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}