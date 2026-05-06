class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        for (int i = 0; i < m; i++) {
            int n = boxGrid[0].size() - 1;
            int empty = 0;
            int prev = -1;
            while (n >= 0) {
                if (boxGrid[i][n] == '*') {
                    empty = 0;
                    prev = -1;
                } else if (boxGrid[i][n] == '.') {
                    if (empty == 0) {
                        prev = n;
                    }
                    empty++;
                } else {
                    if (empty != 0) {
                        swap(boxGrid[i][n], boxGrid[i][prev]);
                        prev--;
                    }
                }
                n--; 
            }
        }
        int col = boxGrid[0].size();
        vector<vector<char>> ansGrid;
        for (int i = 0; i < col; i++) {
            vector<char> rotatedCol;
            int row = boxGrid.size() - 1;
            while (row >= 0) {
                rotatedCol.push_back(boxGrid[row][i]);
                row--;
            }
            ansGrid.push_back(rotatedCol);
        }
        return ansGrid;
    }
};