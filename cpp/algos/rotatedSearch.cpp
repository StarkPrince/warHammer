#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rotatedSearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < nums[high])
        {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        else if (nums[mid] > nums[high])
        {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
            high--;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    vector<int> nums{4, 5, 6, 7, 0, 1, 2, 3};
    int target = 0;
    int index = rotatedSearch(nums, target);
    cout << "index: " << index << endl;
}