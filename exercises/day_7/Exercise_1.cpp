// Consecutive strings
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string longestConsec(vector<string> &strarr, int k) {
    int len = strarr.size();
    if(len == 0 || k > len || k <= 0) return "";

    string longest = "", str;
    for(int i=0; i<=len-k; i++){
        str = "";
        for(int j=i; j<i+k; j++) str+=strarr[j];
        if(str.length() > longest.length()) longest = str;
    }
    return longest;
}

int main() {
    int n = 3;
    vector<string> str = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
    cout << longestConsec(str, n);
    return 0; 
}