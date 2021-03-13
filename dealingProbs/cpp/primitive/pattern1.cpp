#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    bool k = 1;

    for (int i = 1; i < a + 1; i++)
    {
        for (int j = a - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = a; i > 0; i--)
    {
        for (int j = a - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}