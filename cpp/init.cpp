#include <iostream>
#include <string.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for (int i = 1; i <= 16; i++)
    {
        cout << 15 * i - 14 << "-" << 15 * i << "\n";
    }
}
