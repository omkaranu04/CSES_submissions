// IN-BUILT FUNCTION KA BEHTARIN PRADARSHAN KARTE HUE YE CODE
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    string k = s;
    vector<string> ans;
    while (1)
    {
        next_permutation(s.begin(), s.end());
        if (s == k)
            break;
        ans.push_back(s);
    }
    ans.push_back(k);
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto ele : ans)
    {
        cout << ele << endl;
    }
    return 0;
}