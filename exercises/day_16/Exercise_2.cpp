// Spiral Matrix
#include <iostream>
#include <vector>

using namespace std;

vector<int> snail(const vector<vector<int>> &snail_map) {
  vector<vector<int>> matrix = snail_map;
  vector<int> ans;
 
    if (matrix.size() == 0)
        return ans;
 
    int R = matrix.size(), C = matrix[0].size();
    vector<vector<bool>> seen(R, vector<bool>(C, false));
    int dr[] = { 0, 1, 0, -1 };
    int dc[] = { 1, 0, -1, 0 };
    int r = 0, c = 0, di = 0;
 
    // Iterate from 0 to R * C - 1
    for (int i = 0; i < R * C; i++) {
        ans.push_back(matrix[r][c]);
        seen[r][c] = true;
        int cr = r + dr[di];
        int cc = c + dc[di];
 
        if (0 <= cr && cr < R && 0 <= cc && cc < C
            && !seen[cr][cc]) {
            r = cr;
            c = cc;
        }
        else {
            di = (di + 1) % 4;
            r += dr[di];
            c += dc[di];
        }
    }
    return ans;
}

int main() {
    const vector<vector<int>> mat {{1,2,3,4},
                                    {5,6,7,8},
                                    {9,10,11,12},
                                    {13,14,15,16}};
    for(int x : snail(mat)) cout << x << ' ';
    return 0;
}