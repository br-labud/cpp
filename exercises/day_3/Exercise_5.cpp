// Output the sum an integer as string
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Sum(int n) {
    int sum=0;
    string seq="";
    if(n==0) return "0=0";
    if(n<0) return to_string(n)+"<0";

    for(int i=0;i<=n;i++) {
        sum+=i;
        
        if(i<n)  seq+=to_string(i)+"+";
        else seq+=to_string(i)+"="+to_string(sum);
    }
    return seq;
}

int main() {
    int n;
    cout << "Give an integer ";
    cin >> n;  

    cout << Sum(n);
    return 0;
}