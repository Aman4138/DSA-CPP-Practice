Node* reverse(Node* head) {
    Node* prev = NULL;
    while (head) {
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

Node* addOne(Node* head) {

    head = reverse(head);
    Node* temp = head;
    int carry = 1;

    while (temp && carry) {
        int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;

        if (!temp->next && carry) {
            temp->next = new Node(carry);
            carry = 0;
        }
        temp = temp->next;
    }
    return reverse(head);
}
