/* Write a function named repeater() that takes two arguments (a string and a number), 
 and returns a new string where the input string is repeated that many times. */

#include <iostream>

using namespace std;

string repeater(string str, int n) {
    string str1=str;
    if(str=="" || n==0) return "";
    if(n==1) return str;
    do {
        str+=str1;
        n--;
    } while(n>1);
    return str;
}

int main() {
    string str="av";
    int n=4;
    cout << repeater(str,n);
    return 0;
}