// Last non zero digit of factorial
#include <iostream>

using namespace std;

int last_digit(long n) {
    if (n == 0 || n == 1) return 1;
    else if (n == 2  ||  n == 5  ||  n == 6  ||  n == 8) return 2;
    else if (n == 3) return 6;
    else if (n == 4  ||  n == 7) return 4;
    else if (n == 9) return 8;
  
    int koef;
    if (((n % 100) / 10) % 2 == 0) koef = 6;
    else koef = 4;
      
    return (koef * last_digit(n/5) * last_digit(n%10)) % 10;
}

int main() {
    long num = 213564654;
    cout << last_digit(num);
    return 0;
}