// Sort the odd
#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int> array) {
    int value;
    for(int i = 0; i < array.size(); i++) {
        if(array[i] % 2 == 1) {                                     
            for(int j = i + 1; j < array.size(); j++) {
                if(array[j] % 2 == 1 && array[i] > array[j]) {
                    value = array[i];
                    array[i] = array[j];
                    array[j] = value;
                }
            }
        } 
    }
    return array;
}

int main() {
    vector<int> num = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for(int x : sortArray(num))    cout << x << ' ';
    return 0;
}