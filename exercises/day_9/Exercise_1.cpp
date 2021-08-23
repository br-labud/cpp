// Number of trailing zeros of N!
#include <iostream>

using namespace std;

long zeros(long n) {
    long result = 0;
    int div = 5;
    while(n >= div) {
        result += n / div;
        div *= 5;
    }
    return result;
}

int main() {
    long n = 65656;
    cout << zeros(n);
    return 0;
}