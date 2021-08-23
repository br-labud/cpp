// Simple square numbers
#include <iostream>
#include <cmath>

using namespace std;

long solve(long n) {
    for(long i = 1, j = 3; j <= n; i += j, j +=2) {
        double sq = sqrt(n + i);
        if(floor(sq) == sq) return i;
    }
    return -1;
}

int main() {
    long num = 57;
    cout << solve(num) << endl;
    return 0;
}