/* Given a list of integers, determine whether the sum of its elements is odd or even. */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string odd_or_even(const vector<int>& arr) {
    int sum = 0;
    string odd = "odd", even = "even";
    if(arr.empty())
        return even;
  
    for(int i = 0; i < arr.size();i++)
        sum+=arr[i];
    if(sum%2 == 0)
        return even;
    else 
        return odd;     
}

int main() {
    cout << "How long is the list? Write a number ";
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i = 0; i < n; i++)
        cin >> arr.at(i);
    cout << odd_or_even(arr);
    return 0;
}