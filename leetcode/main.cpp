#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int size;
    int temp;
    int answer;

    // Gets size of array
    cout << "\nWhat is the size of the array: ";
    cin >> size;
    cout << endl;

    // Fills out a vector with the integers in the array
    for(int i = 0; i < size; i++)
    {
        cout << "What is the integer at index " << i << ": ";
        cin >> temp;
        nums.push_back(temp);
    }

    // Sorts vector
    sort(nums.begin(), nums.end());

    // Iterates through sorted vector and compares to find missing #
    for(int i = 0; i < size; i++)
    {
        if(i != nums[i])
        {
            answer = i;
        }
    }

    // If an answer exists, display it, if not, display no answer
    if(answer)
    {
        cout << "\nThe missing number is " << answer << endl;
    }
    else
    {
        cout << "\nThere is no missing number" << endl;
    }
    
    return 0;
}