#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    int i = 0, j = 0;
    set<int> ans;
    int curr;
    int final_ans = -1;
    while (i < n && j < n)
    {
        curr = 0;
        while (j < n && !ans.count(k[j]))
        {
            ans.insert(k[j]);
            curr++;
            final_ans = max(final_ans, j - i + 1);
            j++;
        }
        while (j < n && ans.count(k[j]))
        {
            ans.erase(k[i]);
            i++;
        }
    }
    cout << final_ans << endl;
    return 0;
}