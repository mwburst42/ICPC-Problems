#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    int size = nums.size();
    vector<int> answer;
    int temp = target;
    for(int i = 0; i < size; i++)
    {
        target = temp;
        target = target - nums[i];
        for(int j = 0; j < size; j++)
        {
            if(nums[j] == target && j != i)
            {
                answer.push_back(i);
                break;
            }
        }
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