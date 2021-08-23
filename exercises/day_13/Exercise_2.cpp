// Multiplikation Table
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n) {   
    vector<vector<int>> matrix(n);
    
    int x = 1;
    for(int i = 0; i < n; i++) {
        int m = 1;
        for(int j = 0; j < n; j++) {
            matrix[i].push_back(x*m);
            m++;
        }
        x++;
    }
    return matrix;
}

int main() {
    int N = 5;
    for(vector<int> c : multiplication_table(N)) {
        for(int x : c)  cout << x << ' ';
        cout << endl;
    }    
    return 0;
}