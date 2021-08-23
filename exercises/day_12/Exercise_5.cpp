// Maximum Length Difference
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int mxdiflg(vector<string> &a1, vector<string> &a2) {
    if(a1.empty() || a2.empty()) return -1;
    
    int max = 0, diff;

    for(auto a_1 : a1) {
        for(auto a_2 : a2) {
            diff = a_1.length() - a_2.length();
            diff = abs(diff);
            if(max < diff) max = diff;
        }
    }
    return max;
}

int main() {
    vector<string> str1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
    vector<string> str2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
    cout << mxdiflg(str1, str2);
    return 0;
}
