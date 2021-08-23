/* Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd".
Your task is to process a string with "#" symbols. */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string cleanString(const string &s){
    string rem = s;
    for(int i=1; i<rem.length(); i++){
        if(rem[i-1]!='#' && rem[i]=='#'){
            rem = rem.erase(i-1,2);
            i-=2;
        }
    }
    return rem;
}

int main() {
    const string s = "abc#d##c";
    cout << cleanString(s);   
    return 0;
}