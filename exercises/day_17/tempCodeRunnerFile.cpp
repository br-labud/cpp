// Permutations
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> permutations(string s) {
  vector<string> result;
  sort(s.begin(), s.end());
  do {
    result.push_back(s);
  } while(next_permutation(s.begin(), s.end()));
  return result;
}

int main() {
    for(string x : permutations("aabb")) cout << x << endl;
    return 0;
}