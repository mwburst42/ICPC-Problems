#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int,int> index;
        vector<int> answer;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(index.find(target - nums[i]) != index.end())
            {
                answer = {index[target - nums[i]], i};
                return answer;
            }
            index[nums[i]] = i;
        }
        return answer;
}

int main()
{
    vector<int> myVec = {2, 7, 11, 15};
    myVec = twoSum(myVec, 9);
    int size = myVec.size();
    for(int i = 0; i < size; i++)
        cout << myVec[i] << " ";
    return 0;
}