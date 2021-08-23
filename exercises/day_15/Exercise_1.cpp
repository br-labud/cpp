// Diophantine Equation (x^2-4*y^2=n)
#include <iostream>
#include <vector>
#include <utility>
#include <math.h>

using namespace std;

vector<pair<long,long>> solEquaStr(long long n) {
    vector<pair<long,long>> r;
    for(long i = 1; i<= (long)sqrt(n); i++){
        if(n % i == 0) {
            long j = n / i;
            if((j-i) % 4 == 0) {
                long y = (j-i) / 4;
                long x = i + 2 * y;
                r.push_back({x,y});
            }
        }
    }
    return r;
}

int main() {
    int n = 90005;
    for(auto x : solEquaStr(n))
        cout << x.first << ' ' << x.second << endl;
      
    return 0;
}