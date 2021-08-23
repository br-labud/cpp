// Multiplying numbers as strings
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string multiply(string a, string b) {
    vector<int> r(a.length() + b.length()+1, 0);
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    for(int i = 0; i < a.length(); i++) {
        for(int j = 0; j < b.length(); j++) {
            r[i+j] += (a[i] - '0') * (b[j] - '0');
        }
    }

    for(int i = 0;i < r.size()-1;i++)
    {
        r[i+1] += r[i] / 10;
        r[i] %= 10;
    }

    int len = r.size() - 1;

    while(r[len] == 0)
        len --;

    string res;

    for(int i = len;i >= 0;i--) {
        res += (r[i] + '0');
    }

    if(res.size() == 0)
        res += '0';

    return res;
}


int main() {
    string a = "78";
    string b = "105";    
    
    cout << multiply(a, b);
    return 0;
}