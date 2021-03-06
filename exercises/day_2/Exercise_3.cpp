/*  Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p
 we want to find a positive integer k, if it exists, such as the sum of the digits of n
 taken to the successive powers of p is equal to k * n.
 In other words:
 Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k
 If it is the case we will return k, if not return -1.
 Note: n and p will always be given as strictly positive integers. */

#include <iostream>
#include <math.h>

using namespace std;

int digPow(int num, int p){
    int digits, n=num, sum = 0, k;

    while(num!=0) {
        digits=num%10;
        num/=10;
        sum+=pow(digits, p);
        p--;
    }
    return k = sum / n;
}

int main() {
    cout << "Give two integer ";
    int num, p;
    cin >> num >> p;
   
    cout << digPow(num, p);
    return 0; 
}