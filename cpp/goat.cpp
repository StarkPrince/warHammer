#include <iostream>
#include <limits.h>
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << n / 3 << " " << n / 3 << endl;
        else if (n % 3 == 1)
            cout << n / 3 + 1 << " " << n / 3 << endl;
        else
            cout << n / 3 << " " << n / 3 + 1 << endl;
    }
}