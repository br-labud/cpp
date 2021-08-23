// Sum of the perimeters of all the squares (Fibonacci elements) in a rectangle where there are n+1 squares
#include <iostream>

using namespace std;

unsigned long long parameter(int n) {
    unsigned long long fib, fib0=1, fib1=1;
    unsigned long long sum = 2;
    if(n==0) return 4*fib1;
    
    for(int i = 1; i < n; i++) {
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
        sum+=fib;
    }
    return 4*sum;
}

int main() {
    int n;
    cout << "Give an integer ";
    cin >> n;
    cout << parameter(n);
    return 0;
}