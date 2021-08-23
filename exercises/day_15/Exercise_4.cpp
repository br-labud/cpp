// Josephus Permutation
#include <iostream>
#include <vector>

using namespace std;

vector<int> josephus(vector<int> items, int k) {
    vector<int> result;
    int pos = k-1;
    
    while (!items.empty())
    {
        pos %= items.size();
        result.push_back(items[pos]);
        items.erase(items.begin()+pos);
        pos += k-1;
    }

    return result;
}

int main() {
    vector<int> arr =  {1,2,3,4,5,6,7};
    int num = 3;
    for(int x : josephus(arr, num)) {cout << x << ' ';}

    return 0;
}