class Solution {
public:
    int count = 0;
    bool not_attacked(vector<vector<int> > &board, int row, int col){
        int n = board.size(), i, j;
        for(j = 0; j < n; j++){
            if((j != col) && (board[row][j] == 1)) return 0;
        }
        for(i = 0; i < n; i++){
            if((i != row) && (board[i][col] == 1)) return 0;
        }
        for(i = row + 1, j = col + 1;i < n && j < n; i++, j++){
            if(board[i][j]==1) return 0;
        }
        for(i = row - 1, j = col - 1;i >= 0 && j >= 0; i--, j--){
            if(board[i][j]==1) return 0;
        }
        for(i = row + 1, j = col - 1; i < n && j >= 0; i++, j--){
            if(board[i][j]==1) return 0;
        }
        for(i = row - 1, j=  col + 1; i >= 0 && j < n; i--, j++){
            if(board[i][j] == 1) return 0;
        }
        return 1;
    }
    void n_queens(vector<vector<int> > &board, int n, int curr_row){
        if(curr_row == n) {
            count++;
            return;
        }
        for(int i = 0; i < n; i++){
            if(not_attacked(board, curr_row, i)){
                board[curr_row][i] = 1;
                n_queens(board,n,curr_row+1);
                board[curr_row][i] = 0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<int> row(n, 0);
        vector<vector<int> > board(n, row);
        n_queens(board, n, 0);
        return count;
    }
};
