#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void maxSubarray(vector<int> a, int k)
{
    deque<int> dq(k);
    //Process first k elements
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    //Process rest of the elements
    for (int i = 0; i < k; i++)
    {
        cout << a[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && a[i] >= a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
}