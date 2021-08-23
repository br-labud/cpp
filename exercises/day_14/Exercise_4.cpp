// Count characters in the string 
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

map<char, unsigned> count(const string &string) {
    int cnt;
    map<char, unsigned> result;
    for(int i = 0; i < string.length(); i++) {
        cnt = count(string.begin(), string.end(), string.at(i));
        result.insert(pair<char, unsigned>(string.at(i), cnt));
    }
    return result;
}

int main() {
    const string str = "aba";
    map<char, unsigned>::iterator it;
    map<char, unsigned> resul = count(str);
    for(it = resul.begin(); it != resul.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}