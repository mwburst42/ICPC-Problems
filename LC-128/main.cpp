#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) 
{
    int size = nums.size();
    
    if(size == 0)
        return 0;
    if(size == 1)
        return 1;
    
    sort(nums.begin(), nums.end());
    
    int count = 1;
    int total = 1;
    for(int i = 1; i < size; i++)
    {
        if(nums[i] - nums[i - 1] == 1)
        {
            count++;
        }
        else if(nums[i] != nums[i - 1])
        {
            count = 1;
        }
        total = max(total, count);
    }
    return total;
}

int main()
{
    vector<int> myVec = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(myVec);
    return 0;
}