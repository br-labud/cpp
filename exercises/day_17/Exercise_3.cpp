// Sum of odd numbers
#include <iostream>

using namespace std;

long long rowSumOddNumbers(unsigned n) {
    long long sum = 0;
    for(int i = n*(n-1)+1; i < n*(n+1); i++) {
        if(i%2 == 1) sum +=i;
    }
    return sum;
}

int main() {
    unsigned num = 42;
    cout << rowSumOddNumbers(num);
    return 0;
}