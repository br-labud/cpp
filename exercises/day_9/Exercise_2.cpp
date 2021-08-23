// Moving Zeros To The End
#include <iostream>
#include <vector>

using namespace std;

vector<int> move_zeros(const vector<int>& input) {
    vector<int> arr;
    for(int i = 0; i < input.size(); i++) {if(input[i] != 0) arr.push_back(input[i]);}
    for(int i = 0; i < input.size(); i++) {if(input[i] == 0) arr.push_back(input[i]);}
    return arr;
}

void print_vector(const vector<int>& vec) {
    for(auto v : vec) {cout << v << ' ';}
}


int main() {
    vector<int> zeros = {1, 0 , 2, 0, 1, 3};    
    print_vector(move_zeros(zeros));
    return 0;
}