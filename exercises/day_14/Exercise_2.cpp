// Stop Spinning 
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(const string &str)
{
    string s = str;
    int diff = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
        if(i - diff >= 5)
            reverse(s.begin() + diff, s.begin() + i);
     diff = i + 1;
        }
    }
    if(s.length() - diff >= 5)
        reverse(s.begin() + diff, s.end());
    return s;
}


int main() {
    const string word = "fellow";
    cout << spinWords(word);
    return 0;
}