#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string nums[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void printkeypadOutput(string input, string output, int index = 0)
{
    if (input[index] == '\0')
    {
        cout << output << endl;
        return;
    }
    //recursive call
    int currentDigit = input[index] - '0';
    if (currentDigit == 0 || currentDigit == 1)
        printkeypadOutput(input, output, index + 1);
    //keypad
    for (int i = 0; i < nums[currentDigit].size(); i++)
        printkeypadOutput(input, output + nums[currentDigit][i], index + 1);

    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string input;
    cin >> input;
    string output;
    printkeypadOutput(input, output);
}