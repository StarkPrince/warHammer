#include <iostream>
#include <cmath>
using namespace std;

int fact(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans *= i;
    }
    return ans;
}

int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j) << "  ";
        }
        cout << endl;
    }
    return 0;
}