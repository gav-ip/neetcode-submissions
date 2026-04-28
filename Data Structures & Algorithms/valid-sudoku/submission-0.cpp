class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        // boolean for each case 

        // row wise digit check


        for (int row = 0; row < 9; row++) {
            unordered_set<char> seen_rows;
            for (int i = 0; i < 9; i++) {
                if (board[row][i] == '.') continue;
                if (seen_rows.count(board[row][i])) return false;
                seen_rows.insert(board[row][i]);
            }
        }

        // col wise digit check


        for (int col = 0; col < 9; ++col){
            unordered_set<char> seen_col;
            for (int row = 0; row < 9; ++row){
                char element = board[row][col];

                if(element == '.') continue;

                if(seen_col.count(element)){
                    return false;
                }
                seen_col.insert(element);
            }
        }
        
        // 3x3 sub box digit check 
        for (int square = 0; square < 9; ++square){
            unordered_set<char> seen;
            for (int i = 0; i < 3; ++i){
                for (int j = 0; j < 3; ++j){
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }
        return true;

    }
};
