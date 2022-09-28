#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 1; i < size; i++) 
    {
        if (nums[i] == nums[i - 1])
            return nums[i];
    }
    return 0;
}

int main()
{
    vector<int> myVec = {1, 3, 4, 2, 2};
    cout << findDuplicate(myVec);
    return 0;
}