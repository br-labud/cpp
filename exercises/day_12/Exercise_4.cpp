// Unique In Order
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> uniqueInOrder(const string &iterable) {
    vector<char> result;
    for(int i = 0; i < iterable.length(); i++) {
        result.push_back(iterable[i]);
        while(iterable[i] == iterable[i+1]) i++;
    }
    return result;
}

int main() {
    const string str = "aabbcde";
    for(auto v : uniqueInOrder(str)) 
        cout << v <<' ';
    return 0;
}