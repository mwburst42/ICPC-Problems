#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) 
{
    int length = nums.size();
        
    sort(nums.begin(), nums.end());
    int j = 1;
    int i = 0;
    while(i < length && j < length)
        {
            if(nums[i] == nums[j])
            {
                return true;
            }
            i++;
            j++;
        }
    return false;
}

int main()
{
    vector<int> myVec = {1, 2, 3, 1};
    if(containsDuplicate(myVec))
        cout << "true";
    else
        cout << "false";
    return 0;
}