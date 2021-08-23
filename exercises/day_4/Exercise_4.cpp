//  Narcissistic Number(positive number which is the sum of its own digits,each raised to the power of the number of digits in a given base)
#include <iostream>
#include <math.h>

using namespace std;

bool narcissistic(int value) {
    char c;
    int i=0;
    int sum=0;
    int n=value, val=value;

    if(value==0 || value==c) return false;
    
    while(n>0){
        n/=10;
        i++;
    }    
    while(value>0){
        sum+=(int)pow(value % 10, i);
        value/=10;
    }
    if(val==sum) return true;
    else return false;

}

int main() {
    int value;
    cout << "Enter an integer ";
    cin >> value;   
    if(narcissistic(value)==true) cout << "Given number is narcissistic number!";
    else cout << "Given number is not narcissistic number!";

    return 0;
}