// Product of consecutive Fib numbers
#include <iostream>
#include <vector>

typedef unsigned long long ull;

using namespace std;

vector<ull> productFib(ull prod){
    vector<ull> arr = {0, 1, 1};

    while(true) {
        ull last = arr[arr.size()-1];
        ull secondToLast = arr[arr.size()-2];

        if(last*secondToLast == prod) return {secondToLast, last, true};
        else if(last*secondToLast > prod) return {secondToLast, last, false};

        arr.push_back(last+secondToLast);
    }
}

int main() {
    ull prod = 4895;
    for(auto x : productFib(prod)) cout << x << endl;
    return 0;
}