// ******* Josephus Permutation
/* ******* [1,2,3,4,5,6,7] - initial sequence
*******    [1,2,4,5,6,7] => 3 is counted out and goes into the result [3]
*******    [1,2,4,5,7] => 6 is counted out and goes into the result [3,6]
*******    [1,4,5,7] => 2 is counted out and goes into the result [3,6,2]
*******    [1,4,5] => 7 is counted out and goes into the result [3,6,2,7]
*******    [1,4] => 5 is counted out and goes into the result [3,6,2,7,5]
*******    [4] => 1 is counted out and goes into the result [3,6,2,7,5,1]
*******    [] => 4 is counted out and goes into the result [3,6,2,7,5,1,4] */

#include <iostream>
#include <vector>

using namespace std;

vector<int> josephus(vector<int> items, int k) {
    vector<int> result;
    int pos = k-1;
    
    while (items.size())
    {
        pos %= items.size();
        result.push_back(items[pos]);
        items.erase(items.begin()+pos);
        pos += k-1;
    }

    return result;
}

void print_vector(vector<int> n) {
    for(int i=0; i<n.size();i++) {cout<<n[i]<<" ";}
}

int main(){
    vector<int> items = {1,2,3,4,5,6,7};
    int k=3;
    print_vector(josephus(items, k));
    return 0;
}