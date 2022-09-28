#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
{
    int size = nums.size();
    vector<int> answer(size, 1);
    
    int product = 1;
    for(int i = 0; i < size - 1; i++)
    {
        product *= nums[i];
        answer[i + 1] *= product;
    }
    
    product = 1;
    for(int i = size - 1; i > 0; i--)
    {
        product *= nums[i];
        answer[i - 1] *= product;
    }
    
    return answer;
}

int main()
{
    vector<int> myVec = {1, 2, 3, 4};
    myVec = productExceptSelf(myVec);
    int size = myVec.size();

    for(int i = 0; i < size; i++)
        cout << myVec[i] << " ";
    return 0;
}