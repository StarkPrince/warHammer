#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string nums[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generatePredictions(string input, string output, int index = 0)
{
    if (input[index] == '\0')
    {
        cout << output << endl;
        return;
    }
    for (int i = 0; i < nums[input[index] - '0'].size(); i++)
    {
        output.push_back(nums[input[index] - '0'][i]);
        generatePredictions(input, output, index + 1);
        output.pop_back();
    }

    int main()
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
        generatePredictions("", 0, 3);
    }