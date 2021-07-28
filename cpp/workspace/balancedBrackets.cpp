#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateBrackets(string output, int n, int open, int close, int index)
{
    if (index == 2 * n)
    {
        cout << output << endl;
        return;
    }
    if (open < n)
        generateBrackets(output + "(", n, open + 1, close, index + 1);
    if (close < open)
        generateBrackets(output + ")", n, open, close + 1, index + 1);
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    generateBrackets("", n, 0, 0, 0);
}
//1-1
//2-2
//3-5
//4-14
//5-42
//6-132
//7-510
//8-2098
//9-9498
//10-35550
//11-159822
//12-867190
//13-4733682
//14-23651662
//15-126004770
//16-715807962
//17-4304672270
