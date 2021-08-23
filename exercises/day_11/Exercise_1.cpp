// Two to One
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string longest(const string &s1, const string &s2) {
    if(s1 == s2)    return s1;
    
    string sstr = s1 + s2;
    sort(sstr.begin(), sstr.end());
    
    for(auto i = 0; i < sstr.length();i++) {
        if (sstr[i] == sstr[i+1]) {sstr.erase(i+1, 1); i--;}
    }      
    return sstr;
}

int main() {
    const string str1 = "loopingisfunbutdangerous";
    const string str2 = "lessdangerousthancoding";

    cout << longest(str1, str2);    
    return 0; 
}