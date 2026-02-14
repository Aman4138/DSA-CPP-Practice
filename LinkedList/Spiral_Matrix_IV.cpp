class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> mat(m, vector<int>(n, -1));
        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (head && top <= bottom && left <= right) {

            for (int i = left; i <= right && head; i++) {
                mat[top][i] = head->val;
                head = head->next;
            }
            top++;

            for (int i = top; i <= bottom && head; i++) {
                mat[i][right] = head->val;
                head = head->next;
            }
            right--;

            for (int i = right; i >= left && head; i--) {
                mat[bottom][i] = head->val;
                head = head->next;
            }
            bottom--;

            for (int i = bottom; i >= top && head; i--) {
                mat[i][left] = head->val;
                head = head->next;
            }
            left++;
        }
        return mat;
    }
};
