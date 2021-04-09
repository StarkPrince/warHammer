#include <iostream>
#include <string.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int Q;
    cin >> Q;
    for (int a0 = 0; a0 < Q; a0++)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        int counters[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int emptys = 0;
        for (size_t i = 0; i < n; ++i)
        {
            if (b[i] != '_')
                counters[b[i] - 'A']++;
            else
                emptys++;
        }
        bool happy = true;
        for (size_t i = 0; i < 26; ++i)
        {
            if (counters[i] == 1)
            {
                happy = false;
                break;
            }
        }
        if (emptys == 0)
        {
            if (happy)
            {
                if (b[0] != b[1] || b[n - 1] != b[n - 2])
                    happy = false;
                else
                    for (size_t i = 1; i < n - 1; ++i)
                        if (b[i] != b[i - 1] && b[i] != b[i + 1])
                        {
                            happy = false;
                            break;
                        }
            }
        }
        cout << (happy ? "YES\n" : "NO\n");
    }
    return 0;
}