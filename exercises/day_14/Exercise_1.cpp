// Which are in
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> inArray(vector<string> &array1, vector<string> &array2) {
    vector<string> result;
    
    for (string a1 : array1) {
        for (string a2 : array2) {
            if (a2.find(a1) != string::npos){
                result.push_back(a1);
                break;
            }
        }
    }
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<string> a = {"arp", "live", "strong"};
    vector<string> b = {"lively", "alive", "harp", "sharp", "armstrong"};

    for(auto c : inArray(a,b))   cout << c << ' ';
    return 0;
}