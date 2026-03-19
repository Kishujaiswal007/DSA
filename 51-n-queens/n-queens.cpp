class Solution {
public:
    void solve(int n, int row, vector<string>& board, 
               vector<int>& col, vector<int>& diag1, vector<int>& diag2,
               vector<vector<string>>& result) {
        
        // Base case: all queens placed
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++) {
            // Check if safe
            if (col[c] || diag1[row + c] || diag2[row - c + n - 1])
                continue;

            // Place queen
            board[row][c] = 'Q';
            col[c] = diag1[row + c] = diag2[row - c + n - 1] = 1;

            // Recurse
            solve(n, row + 1, board, col, diag1, diag2, result);

            // Backtrack
            board[row][c] = '.';
            col[c] = diag1[row + c] = diag2[row - c + n - 1] = 0;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));

        vector<int> col(n, 0);
        vector<int> diag1(2*n, 0);        // row + col
        vector<int> diag2(2*n, 0);       // row - col + n - 1

        solve(n, 0, board, col, diag1, diag2, result);
        return result;
    }
};