// NxN Matrix Multiplication
#include <iostream>
#include <vector>
#include <cstddef>

using namespace std;

vector<vector<int>> matrix_multiplikation(vector<vector<int>> &a, vector<vector<int>> &b, int n) {
  
    vector<vector<int>> c(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return c;  
}

int main() {
    int n = 2;
    vector<vector<int>> A = {{1,2},
                             {3,2}};
    vector<vector<int>> B = {{3,2},
                             {1,1}};

    
    vector<vector<int>> mult = matrix_multiplikation(A,B,n);
    for(int i = 0; i < mult.size(); i++){
        for(int j = 0; j < mult.size(); j++){
            cout << mult[i][j] <<' ';
        }
        cout << endl;
    }
    return 0;
}