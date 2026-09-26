class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> rowSet[9];
        unordered_set<int> colSet[9];
        unordered_set<int> boxSet[9];
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c == '.') continue;
                
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                if (rowSet[i].count(c) || colSet[j].count(c) || boxSet[boxIndex].count(c)) {
                    return false;
                }
                
                rowSet[i].insert(c);
                colSet[j].insert(c);
                boxSet[boxIndex].insert(c);
            }
        }
        return true;
    }
};