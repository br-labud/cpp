// Remove String Spaces
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string no_space(string x){
    for(int i = 0; i < x.length();i++) {
        if(x[i] == ' ') {x.erase(i, 1); i--;}
    }
    return x;
}

int main() {
    string str = "8 j 8   mBliB8g  imjB8B8  jl  B";
    cout << no_space(str);
    return 0;
}