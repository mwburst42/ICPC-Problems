#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) 
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> answer;
    int row = 0;
    int column = 0;
    
    while(row < m && column < n)
    {
        for(int i = column; i < n ;i++)
        {
            answer.push_back(matrix[row][i]);
        }
        row++;

        for(int i = row; i< m ;i++)
        {
            answer.push_back(matrix[i][n-1]);          
        }
        n--;

        if(row < m)
        {
            for(int i = n - 1; i >= column; i--)
            {
                answer.push_back(matrix[m - 1][i]);      
            }
            m--;
        }

        if(column < n)
        {
            for(int i = m - 1; i >= row ;i--)
            {
                answer.push_back(matrix[i][column]);   
            }
            column++;
        }
    }
    return answer;    
}

int main()
{
    vector<vector<int>> myVec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> answer = spiralOrder(myVec);
    int size = answer.size();

    for(int i = 0; i < size; i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}