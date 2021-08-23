// Prime reduction 
#include <iostream>

using namespace std;

int solve(int a, int b){
    int count=0,temp=0,flag=1;
    
    for(int i = a; i < b; i++){
        for(int k = 2 ;k <= i/2; k++){
            if(i % k == 0)  {flag=1; break;}
            else    flag=0;
        }
        if(flag == 0){
            temp=i;
            for(int j = 0; j < 20; j++){
                int temp1 = temp;
                temp=0;
            
                while(temp1){
                    int r = temp1 % 10;
                    temp1 /= 10;
                    temp += r*r;
                }
            }
        }
        if(temp==1)
            count++;
        temp=0;
    }
    return count;
}

int main() {
    int num1 = 100;
    int num2 = 1000;
    cout << solve(num1, num2);
    return 0;
}