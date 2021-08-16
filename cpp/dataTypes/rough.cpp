#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int inv = n - k;
        int unchanged = k - (inv + 1);
        for (int i = 0; i < unchanged; i++)
            cout << i + 1 << " ";
        for (int i = k; i > unchanged; i--)
            cout << i << " ";
        cout << endl;
    }
}

// 10
// 5 6 1 3 2 9 8 1 2 4
