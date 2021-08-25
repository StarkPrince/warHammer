#include <iostream>
#include <vector>
using namespace std;

bool compareBoxes(vector<int> b1, vector<int> b2)
{
    return b1[2] < b2[2];
}

int boxStack(vector<vector<int>> boxes)
{
    sort(boxes.begin(), boxes.end(), compareBoxes);
    vector<int> dp(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        dp[i] = boxes[i][2];
    }
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (boxes[i][0] > boxes[j][1] && boxes[i][1] > boxes[j][0])
                dp[i] = max(dp[i], dp[j] + boxes[i][2]);
    return dp[n - 1];
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> boxes(n);
    for (int i = 0; i < n; i++)
        cin >> boxes[i][0] >> boxes[i][1] >> boxes[i][2];
    boxStack(boxes);
}