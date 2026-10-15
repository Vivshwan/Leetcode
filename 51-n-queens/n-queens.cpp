class Solution {
public:
    bool isSafe(vector<string> &board , int row , int col, int n ){
        for(int i = 0;i<n ; i++){  //horizontal check
            if(board[row][i] == 'Q'){
                return false ;
            }
        }
        for(int j = 0 ;j<n ; j++ ){  //vertical check
            if(board[j][col]=='Q'){
                return false;
            }
        }
        // left diagonal
        for (int r = row, c = col; r >= 0 && c >= 0; r--, c--)
            if (board[r][c] == 'Q') return false;

        // right diagonal
        for (int r = row, c = col; r >= 0 && c < n; r--, c++)
            if (board[r][c] == 'Q') return false;


        return true ;
    }


    void nqueens(vector<string> &board , vector<vector<string>> &ans , int row, int n){
        if(row == n ){   //baseclass
            ans.push_back({board});
            return ;
        }

        for(int j = 0; j<n ;j++){
            if(isSafe(board , row,j , n)){
                board[row][j] = 'Q';
                nqueens(board , ans, row+1 ,n);
                board[row][j] = '.'; //backtrack

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        nqueens(board , ans , 0 , n );

        return ans;
    }
};