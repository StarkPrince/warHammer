#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sparseSearch(string a[], int n, string key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        int midleft = m - 1;
        int midright = m + 1;
        if (a[m] == "")
        {
            while (1)
            {
                if (midleft < s && midright > e)
                    return -1;
                else if (midright <= e && a[midright] != "")
                {
                    m = midright;
                    break;
                }
                else if (midleft >= s && a[midleft] != "")
                {
                    m = midleft;
                    break;
                }
                midright++;
                midleft--;
            }
        }
        else if (a[m] == key)
            return m;
        else if (a[m] < key)
            s = m + 1;
        else
            e = m - 1;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string a[] = {"ass", "", "bat", "", "", "cat", "", "", "prince", "rat"};
    int index = sparseSearch(a, 10, "rat");
    cout << index << endl;
}