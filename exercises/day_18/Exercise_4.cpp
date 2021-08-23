// The Supermarket Queue
#include <iostream>
#include <functional>
#include <queue>
#include <vector>

using namespace std;

long queueTime(vector<int> customers, int n) {
  priority_queue<long, vector<long>, greater<long>> q;
  for (int i = 0; i < n; i++)
    q.push(0);
  for (int t : customers) {
    q.push(q.top() + t);
    q.pop();
  }
  for (int i = 1; i < n; i++)
    q.pop();
  return q.top();
}

int main() {
    cout << queueTime({1,2,3,4}, 1);
    return 0;
}