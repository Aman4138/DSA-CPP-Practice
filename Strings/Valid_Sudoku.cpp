class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {

            vector<int> row(9, 0);
            vector<int> col(9, 0);
            vector<int> box(9, 0);

            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    if (row[num] == 1) return false;
                    row[num] = 1;
                }

                if (board[j][i] != '.') {
                    int num = board[j][i] - '1';
                    if (col[num] == 1) return false;
                    col[num] = 1;
                }
                int r = 3 * (i / 3) + j / 3;
                int c = 3 * (i % 3) + j % 3;

                if (board[r][c] != '.') {
                    int num = board[r][c] - '1';
                    if (box[num] == 1) return false;
                    box[num] = 1;
                }
            }
        }
        return true;
    }
};
