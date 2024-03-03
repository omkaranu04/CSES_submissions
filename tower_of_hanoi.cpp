#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, char source, char aux, char destination)
{
    if (n == 1)
    {
        cout << source << " " << destination << endl;
    }
    else
    {
        hanoi(n - 1, source, destination, aux);
        cout << source << " " << destination << endl;
        hanoi(n - 1, aux, source, destination);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n, '1', '2', '3');
    return 0;
}