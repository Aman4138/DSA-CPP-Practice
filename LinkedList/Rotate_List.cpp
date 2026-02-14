class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next)
            return head;

        int len = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            len++;
        }

        k = k % len;
        if (k == 0)
            return head;

        tail->next = head;

        for (int i = 0; i < len - k; i++) {
            tail = tail->next;
        }

        head = tail->next;
        tail->next = NULL;

        return head;
    }
};
