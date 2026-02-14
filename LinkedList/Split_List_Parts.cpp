class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        vector<ListNode*> ans(k, NULL);
        int len = 0;
        ListNode* temp = head;

        while (temp) {
            len++;
            temp = temp->next;
        }

        int size = len / k;
        int extra = len % k;

        temp = head;

        for (int i = 0; i < k; i++) {
            ans[i] = temp;
            int currSize = size + (extra > 0 ? 1 : 0);
            extra--;

            for (int j = 0; j < currSize - 1 && temp; j++) {
                temp = temp->next;
            }

            if (temp) {
                ListNode* next = temp->next;
                temp->next = NULL;
                temp = next;
            }
        }
        return ans;
    }
};
