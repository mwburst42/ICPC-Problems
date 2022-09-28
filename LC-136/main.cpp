#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int singleNumber(vector<int>& nums) 
{
    unordered_map<int, int> duplicates;
    int size = nums.size();
    unordered_map<int, int>::iterator itr;
    int num;
    
    for(int i = 0; i < size; i++)
    {
        duplicates.insert(pair<int, int>(nums[i], 0));
        duplicates[nums[i]]++;
    }
    
    for(itr = duplicates.begin(); itr != duplicates.end(); itr++)
    {
        if(itr->second == 1)
        {
            num = itr->first;
            break;
        }
    }
    return num;
}

int main()
{
    vector<int> myVec = {2, 2, 1};
    cout << singleNumber(myVec);
    return 0;
}