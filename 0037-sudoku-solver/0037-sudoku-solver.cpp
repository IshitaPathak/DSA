class Solution {
public:
   bool isValid(vector<vector<char>> &board, int i, int j, char c) {
    // checking column
    for (int m = 0; m < board.size(); m++) {
        if (board[m][j] == c) return false;
    }

    // checking row
    for (int n = 0; n < board.size(); n++) {
        if (board[i][n] == c) return false;
    }

    // checking 3x3 subgrid
    int startRow = 3 * (i/ 3);
    int startCol = 3 * (j / 3);
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 3; n++) {
            if (board[startRow + m][startCol + n] == c) return false;
        }
    }

    return true;
}

    
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;
                            
                         if(solve(board)==true)
                             return true;
                        else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    
};