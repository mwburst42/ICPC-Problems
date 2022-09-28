#include <iostream>
#include <vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) 
{
    vector<int>zeroRow;
    vector<int>zeroColumn;
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                zeroRow.push_back(j);
                zeroColumn.push_back(i);
            }
        }
    }
    
    int sizeR = zeroRow.size();
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < sizeR; j++)
        {
            matrix[i][zeroRow[j]] = 0;
        }
    }
    
    int sizeC = zeroColumn.size();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < sizeC; j++)
        {
            matrix[zeroColumn[j]][i] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> myVec = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(myVec);
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