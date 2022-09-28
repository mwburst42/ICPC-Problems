#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix) 
{
    int size = matrix.size();
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i = 0; i < size; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> myVec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(myVec);

    int size = myVec.size();
    int size2 = myVec[0].size();

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            cout << myVec[i][j];
        }
        cout << ", ";
    }
    return 0;
}