class Solution {
public:
    bool isSafe(vector<vector<char>>& board , int row , int col , char digit){

        for(int i = 0 ; i<9 ; i++){ // horizontal check 
            if(board[row][i] == digit){
                return false ;
            }
        }
        for(int i = 0 ; i < 9 ;i++ ){  //vertical check
            if(board[i][col] == digit){
                return false;
            }
        }
        int sr = (row/3) * 3;
        int sc = (col/3) * 3;
        
        for(int i = sr ; i<=sr+2 ; i++ ){ //grid check
            for(int j = sc ; j<=sc+2 ; j++){
                if(board[i][j] == digit ){
                    return false ;
                }
            }
        }
        return true;
    }
    bool sudokosolver(vector<vector<char>>& board , int row , int col ){
        if(row == 9){
            return true;
        }
        
        int nextrow=row;
            int nextcol=col+1;
            if(nextcol==9){
                nextrow=row+1;
                nextcol=0;
            }
        //check cell is empty or not
        if(board[row][col] !=  '.'){
            return sudokosolver(board , nextrow ,nextcol);

        }
        //place the digit
        for(char digit = '1' ; digit<='9' ; digit++){
            if(isSafe(board ,row ,col ,digit)){
                board[row][col] = digit;
                if(sudokosolver(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col] = '.'; //backtrack
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudokosolver(board , 0 , 0);
    }
};