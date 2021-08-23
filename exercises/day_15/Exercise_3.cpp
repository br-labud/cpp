// Last digit of a large number
#include <string>
#include <iostream>
  
using namespace std;

int last_digit(const string &str1,const string &str2) {
  
   
    int a,b;
    int len= str2.length();
    a = str1.back()-'0';
    
    if(len>1)
        b=(str2[str2.length()-2]-'0')*10+(str2[str2.length()-1]-'0');
    else  b = str2.back()-'0';
    
    if( b==0 && len==1) return 1;
    if(b%4==0)  b=4;
    else    b=b%4;
    
    int pow=1;
    for(int i=1;i<=b; i++)  pow*=a;

    return pow%10;
}

int main() {
    const string arr1 = "9";
    const string arr2 = "7";

    cout << last_digit(arr1, arr2);
    return 0;
}