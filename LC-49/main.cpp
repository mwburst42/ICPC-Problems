#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    int size = strs.size();
    map<string, vector<string>> sortedStr;
    vector<vector<string>> answer;
    
    string str = "";
    for(int i = 0; i < size; i++)
    {
        str = strs[i];
        sort(str.begin(), str.end());
        sortedStr[str].push_back(strs[i]);
    }
    for(auto i : sortedStr)
    {
        answer.push_back(i.second);
    }
    return answer;
}

int main()
{
    vector<string> myVec = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> answer = groupAnagrams(myVec);
    int size = myVec.size();
    int size2;

    for(int i = 0; i < size; i++)
    {
        size2 = answer[i].size();
        cout <<"[";
        for(int j = 0; j < size2; j++)
        {
            cout << answer[i][j] << ",";
        }
        cout << "] ";
    }
}