// Exes and Ohs
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string lowerCase(string text) {
    for(int i = 0; i < text.length(); i++) text[i] = tolower(text[i]);
    return text;
}

bool XO(const string &str) {
    string str1 = lowerCase(str);
    int cx, co;
    cx = count(str1.begin(), str1.end(), 'x');
    co = count(str1.begin(), str1.end(), 'o');
    if(cx == co) return true;
    else return false;
}

int main() {
    const string word = "mOOoXxx";
    if(XO(word) == true) cout << "true";
    else cout << "false";
    return 0;
}