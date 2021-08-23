// Simple time difference
#include <iostream>      
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solve(vector<string> times) {
  vector<int> number;
  for (auto t : times) {
    int i = (t[0] - '0') * 10 + (t[1] - '0');
    i = 60 * i + (t[3] - '0')* 10 + (t[4] - '0');
    number.push_back(i);
  }
  sort(number.begin(), number.end());
  number.push_back(number.front() + 24 * 60);
  int max = 0;
  for (auto i = 1; i < number.size(); i ++) {
    max = std::max({max, number[i] - number[i-1] - 1});
  }
  string result;
  result.push_back('0' + max / 600);
  result.push_back('0' + max / 60 % 10);
  result.push_back(':');
  result.push_back('0' + max % 60 / 10);
  result.push_back('0' + max % 10);
  return result;
}

int main() {
    vector<string> time = {"21:14", "15:34", "14:51", "06:25", "15:30"};
    cout << solve(time);
    return 0;
}