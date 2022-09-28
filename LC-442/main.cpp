#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) 
{
    unordered_map<int, int> duplicates;
    int size = nums.size();
    unordered_map<int, int>::iterator itr;
    vector<int> twice;
    
    for(int i = 0; i < size; i++)
    {
        duplicates.insert(pair<int, int>(nums[i], 0));
        duplicates[nums[i]]++;
    }
    
    for(itr = duplicates.begin(); itr != duplicates.end(); itr++)
    {
        if(itr->second == 2)
        {
            twice.push_back(itr->first);
        }
    }
    return twice;
}

int main()
{
    vector<int> myVec = {4, 3, 2, 7, 8, 2, 3, 1};
    myVec = findDuplicates(myVec);
    int size = myVec.size();

    for(int i = 0; i < size; i++)
        cout << myVec[i] << " ";
    return 0;
}