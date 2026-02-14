class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if (!head || !head->next)
            return head;

        ListNode* newHead = head->next;
        ListNode* prev = NULL;

        while (head && head->next) {
            ListNode* temp = head->next;
            head->next = temp->next;
            temp->next = head;

            if (prev)
                prev->next = temp;

            prev = head;
            head = head->next;
        }
        return newHead;
    }
};
