#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> dp(n, -1);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    vector<int> answer;
    answer.push_back(x[0]);
    for (int i = 1; i < n; i++)
    {
        if (x[i] > answer.back())
        {
            answer.push_back(x[i]);
        }
        else
        {
            int ind = lower_bound(answer.begin(), answer.end(), x[i]) - answer.begin();
            answer[ind] = x[i];
        }
    }
    cout << answer.size() << endl;
    return 0;
}
