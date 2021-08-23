/*  Given a list of digits, return the smallest number that could be formed from these digits, 
 using the digits only once (ignore duplicates).
 Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
 (579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without duplications */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long minValue(vector<int> values) {
    sort(values.begin(), values.end());
    values.erase(unique(values.begin(), values.end()), values.end());
    
    int sum = 0;
    sum += values[0];
    for (int i = 1; i < values.size(); i++) {sum = sum * 10 + values[i];}    
    
    return sum;
}

int main() {
    vector<int> values = {6,7,8,7,6,6};
    cout << minValue(values);
    return 0;
}