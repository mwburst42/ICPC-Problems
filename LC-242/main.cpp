#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) 
{
    int size = s.size();
    int size2 = t.size();
    unordered_map<char, int> mapS;
    unordered_map<char, int> mapT;
    if(size != size2)
    {
        return false;
    }
    for(int i = 0; i < size; i++)
    {
        mapS[s[i]]++;
    }
    for(int i = 0; i < size; i++)
    {
        mapT[t[i]]++;
    }        
    for(int i = 0; i < size; i++)
    {
        if(mapS[t[i]] != mapT[t[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    if(isAnagram("anagram", "nagaram"))
        cout << "true";
    else
        cout << "false";
}