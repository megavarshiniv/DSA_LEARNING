class Solution {
    bool isSafe(vector<string>& board,int row,int col,int n){
        //check same row

        for(int i=0;i<row;i++){
            if(board[i][col]=='Q') return false;
        }
        //check same col
        for(int i=row;i<n;i++){
            if(board[i][col]=='Q') return false;
        }
        //check in the upper left diagonal
        int i = row - 1;
        int j = col - 1;
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 'Q') return false;
            i--;
            j--;
        }
        //check in the upper right diagonal 
        i = row - 1;
        j = col + 1;
        while (i >= 0 && j < n) {
            if (board[i][j] == 'Q') return false;
            i--;
            j++;
        }
        return true;

    }
    void solve(vector<string>& board,int row,vector<vector<string>>& finalOutput,int n){
        //base case
        if(row==n){
            finalOutput.push_back(board);
            return;
        }

        //placing queens one by one in every row
        for(int col=0;col<n;col++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                solve(board,row+1,finalOutput,n);
                //backtrack
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        
         vector<string> board(n,string(n,'.'));
         vector<vector<string>> finalOutput;
         solve(board,0,finalOutput,n);
         return finalOutput;
    }
};