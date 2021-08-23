// Split String
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(const string &s) {
    vector <string> res;
    
    for (int i = 0; i < s.length(); i += 2) res.push_back(s.substr(i, 2));
    if (s.length() % 2) res[res.size() - 1] += "_";
    return res;
}

int main() {
    const string s = "absde";
    for(auto i : solution(s))
        cout << i << ' ';
    return 0;
}