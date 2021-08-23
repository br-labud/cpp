// Given three arrays of integers, return the sum of elements that are common in all three arrays.
#include <iostream>
#include <vector>

using namespace std;

int common(vector<int> a, vector<int> b, vector<int> c) 
{
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                for (int k = 0; k < c.size(); k++) {
                    if (a[i] == c[k]) {
                        sum += c[k];
                        a.erase(a.begin() + i);
                        b.erase(b.begin() + j);
                        c.erase(c.begin() + k);
                        i--;
                        break;
                    }
                }
            }
        }
    }
    return sum;
}

int main() {
    vector<int> a = {1,2,3}, b= {5,3,2}, c = {7,3,2};
    cout << common(a,b,c);

    return 0;
}