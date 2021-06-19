#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int binarytoDecimal(int a)
{
    int ans = 0;
    int i = 0;
    while (a > 0)
    {
        int s = a % 10;
        ans += s * pow(2, i);
        i += 1;
        a = int(a / 10);
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    cout << binarytoDecimal(a);
    return 0;
}