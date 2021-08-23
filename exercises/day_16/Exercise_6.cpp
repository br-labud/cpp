// Create Phone Number
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

string createPhoneNumber(const int arr[10]) {
    stringstream str;
    
    for(int i = 0; i < 10; i++) {
        if(i==0)    {str << "("; str << arr[0];}
        else if(i==2)   {str << arr[2]; str << ") ";}
        else if(i==5)   {str << arr[5]; str << "-";}
        else    str << arr[i];
    }
    return str.str();
}

int main() {
    const int num[10] = {1,2,3,4,5,6,7,8,9,0};
    cout<<createPhoneNumber(num);
    return 0;
}