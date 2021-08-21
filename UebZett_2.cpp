// //BSP7. ---gcd---
// #include<iostream>
// using namespace std;

// int main(){
//     unsigned int a, b, n, m, r;
//     cout<<"Give two numbers: ";
//     cin >> a >> b;
//     m = a;
//     n = b;
//     if(m<n){
//         m = b;
//         n = a;
//     }
//     while(n!=0){
//    //     cout <<"The greatest common divisor is: "<< m << endl;
//     r = m % n;
//     m = n;
//     n = r;
//    // goto p;
//     }
//     cout <<"The greatest common divisor is: "<< m << endl;
//     return 0;
// }

//BSP8.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    unsigned int n;
    float x;
    double a, s=1.;
    cout <<"Give two numbers for x and n: ";
    cin >> x >> n;
    for(int i=1; i<=n; i++){
        a=pow(x,i)/i;
        s+=a;
        if(n<10){
            cout <<"a_"<< i <<"= "<< a << endl;
            cout <<"s_"<< i <<"= "<< s << endl;
        }
        else {
            if(i>n-10 && i<=n){
                cout <<"a_"<< i <<"= "<< a << endl;
                cout <<"s_"<< i <<"= "<< s << endl;
            }
        }
    }
    cout <<"Sum all n numbers is "<< s <<endl;
    return 0;
}
