#include <iostream>
#include <string.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int p;
        cin >> p;
        string g;
        cin >> g;
        bool l = true;
        char left = g[0];

        for (int i = 1; i < p - 1; i++)
        {
            cout << i << " " << g[i] << " " << l << endl;
            if (g[i] == '_')
                continue;
            else if (g[i] == left || g[i] == g[i + 1])
                left = g[i];
            else
                l = false;
        }
        cout << left << " " << g[p - 1] << " ";
        cout << ((left == g[p - 1] && l) ? "YES\n" : "NO\n") << endl;
    }
}