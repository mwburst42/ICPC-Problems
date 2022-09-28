#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums) 
{
    int size = nums.size();
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < size; i++)
    {
        if(i != nums[i])
            return i;
    }
    return size;
}

int main()
{
    vector<int> myVec = {3, 0, 1};
    cout << missingNumber(myVec);
    return 0;
}