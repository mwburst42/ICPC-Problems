#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    unordered_map<int, int> mapNums;
    set<pair<int,int>> freq;
    int size = nums.size();
    vector<int> answers;
    for(int i = 0; i < size; i++)
    {
        mapNums[nums[i]]++;
    }
    for(auto i : mapNums)
    {
        freq.insert(make_pair(i.second, i.first));
    }
    
    int sizeF = freq.size();
    
    auto itr = freq.rbegin();
    for(int i = 0; i < k; i++)
    {
        answers.push_back(itr->second);
        itr++;
    }
    return answers;
}

int main()
{
    vector<int> myVec = {1, 1, 1, 2, 2, 3};
    myVec = topKFrequent(myVec, 2);
    int size = myVec.size();
    for(int i = 0; i < size; i++)
    {
        cout << myVec[i] << " ";
    }
    return 0;
}