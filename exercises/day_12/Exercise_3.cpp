// Matrix Addition
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrixAddition(vector<vector<int>> &a, vector<vector<int>> &b) {
    vector<vector<int>> sum(a.size());
    for(auto i = 0; i < a.size(); i++) {
        for(auto j = 0; j < a[i].size(); j++){
            sum[i].push_back(a[i][j] + b[i][j]);
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> A = {{1,2,3},{3,2,1},{1,1,1}};
    vector<vector<int>> B = {{2,2,1},{3,2,3},{1,1,3}};
    
    vector<vector<int>> result = matrixAddition(A,B);   
    
    for(vector<int> vec : result) {
        for(int x : vec) {
            cout << x <<' ';
        }
        cout << endl;
    } 
    return 0;
}