// Build Tower
#include <iostream>
#include <vector>

using namespace std;

vector<string> towerBuilder(int n)
{
  vector<string> result;

  for (auto i=0; i<n; ++i)
  {
    result.push_back(
      string(n-i-1, ' ') +
      string(i*2+1, '*') +
      string(n-i-1, ' ')
    );
  }
  return result;
}

int main() {
    for(string x : towerBuilder(6)) cout << x << endl;
    return 0;
}