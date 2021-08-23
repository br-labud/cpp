// Pascal`s Trinagle
#include <iostream>
#include <vector>

using namespace std;

vector<long long> pascalsTriangle(int n) {
    vector<long long> result;
    long long coef = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(i == 0 || j == 0) result.push_back(1);
            else {coef=coef*(i-j+1)/j; result.push_back(coef);}
        }
    }
    return result;
}

int main() {
    int num = 5;
    for(int x : pascalsTriangle(num)) {cout << x << ' ';}
    return 0;
}