#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) 
{
    unordered_set<char> row[9];
    unordered_set<char> column[9];
    unordered_set<char> square[9];
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            char num = board[i][j];
            if(num == '.' || num == ',')
                continue;
            int s = ((i / 3) * 3) + (j / 3);
            
            if(row[i].count(num) || column[j].count(num) || square[s].count(num))
                return false;
            row[i].insert(num);
            column[j].insert(num);
            square[s].insert(num);
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> myVec = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};
    if(isValidSudoku(myVec))
        cout << "true";
    else
        cout << "false";
    return 0;
}