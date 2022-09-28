#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    unordered_map<int, int> myMap;
    unordered_map<int, int>::iterator itr;
    int size = nums.size();
    vector<int> myVec;
    
    for(int i = 1; i < (size + 1); i++)
    {
        myMap.insert(pair<int,int>(i, 1));
    }
    for(int i = 0; i < size; i++)
    {
        myMap[nums[i]] = 0;
    }
    for(itr = myMap.begin(); itr != myMap.end(); itr++)
    {
        if(itr->second == 1)
        {
            myVec.push_back(itr->first);
        }
    }
    return myVec;
}

int main()
{
    vector<int> myVec = {4, 3, 2, 7, 8, 2, 3, 1};
    myVec = findDisappearedNumbers(myVec);
    int size = myVec.size();

    for(int i = 0; i < size; i++)
        cout << myVec[i] << " ";
    
    return 0;
}