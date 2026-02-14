Node* deleteMid(Node* head) {

    if (!head || !head->next)
        return NULL;

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    return head;
}
