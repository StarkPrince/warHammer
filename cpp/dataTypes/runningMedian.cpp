#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void runningMedian(vector<int> nums)
{
    priority_queue<int> leftHeap; // max heap
    priority_queue<int, vector<int>, greater<int>> rightHeap;

    leftHeap.push(nums[0]);

    float med = nums[0];
    cout << med << " ";
    for (int i = 1; i < nums.size(); i++)
    {
        if (leftHeap.size() > rightHeap.size())
        {
            if (nums[i] < med)
            {
                rightHeap.push(leftHeap.top());
                leftHeap.pop();
                leftHeap.push(nums[i]);
            }
            else
                rightHeap.push(nums[i]);
            med = (leftHeap.top() + rightHeap.top()) / 2.0;
        }
        else if (leftHeap.size() < rightHeap.size())
        {
            if (nums[i] < med)
                leftHeap.push(nums[i]);
            else
            {
                leftHeap.push(rightHeap.top());
                rightHeap.pop();
                rightHeap.push(nums[i]);
            }
            med = (leftHeap.top() + rightHeap.top()) / 2.0;
        }
        else
        {
            if (nums[i] < med)
            {
                leftHeap.push(nums[i]);
                med = leftHeap.top();
            }
            else
            {
                rightHeap.push(nums[i]);
                med = rightHeap.top();
            }
        }
        cout << med << " ";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<int> nums{10, 5, 3, 2, 0, 12, 18, 20, 22};
    runningMedian(nums);
}