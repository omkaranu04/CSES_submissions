#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<string> ans;
    vector<string> rev_ans;
    ans.push_back("0");
    ans.push_back("1");
    for (int i = 1; i < n; i++)
    {
        for (int i = size(ans) - 1; i >= 0; i--)
        {
            rev_ans.push_back(ans[i]);
        }
        for (int i = 0; i < size(ans); i++)
        {
            ans[i] = "0" + ans[i];
        }
        for (int i = 0; i < size(rev_ans); i++)
        {
            rev_ans[i] = "1" + rev_ans[i];
        }
        for (int i = 0; i < size(rev_ans); i++)
        {
            ans.push_back(rev_ans[i]);
        }
        rev_ans.clear();
    }
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}