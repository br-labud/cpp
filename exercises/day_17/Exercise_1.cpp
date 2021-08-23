// Sum of Intervals
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int sum_intervals(vector<pair<int, int>> intervals) {
  set<int> s;
    for(const auto& it : intervals)
        for(int cnt = it.first; cnt != it.second; ++cnt)
            s.insert(cnt);
    return s.size();
}

int main() {
  cout << sum_intervals({{1,5},{6,10}});
  return 0;
} 