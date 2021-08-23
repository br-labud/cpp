// Cumulate sum of divisors
#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

uint64_t newFunction(const uint64_t n)
{
  uint64_t result = 0;
  for (uint64_t i = 2; i <= sqrt(n); ++i)
  {
    uint64_t j = n / i;
    result += (i + j) * (j - i + 1) / 2;
    result += i * (j - i);
  }
  return result;
}

int main() {
    uint64_t num = 1000000;
    cout << newFunction(num);
    return 0;
}