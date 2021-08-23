// Maximum subarray sum
#include <iostream>
#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr) {
    int localmax = 0;
    int globalmax = 0;

    for(int x : arr) {
        localmax += x;
        if(localmax > globalmax) globalmax = localmax;
        if(localmax < 0) localmax = 0;
    }
    return globalmax;
}

int main() {
    vector<int> num {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSequence(num);
    return 0;   
}