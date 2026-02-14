Node* mergeTwo(Node* a, Node* b) {

    if (!a) return b;
    if (!b) return a;

    if (a->data < b->data) {
        a->next = mergeTwo(a->next, b);
        return a;
    } else {
        b->next = mergeTwo(a, b->next);
        return b;
    }
}

Node* mergeKLists(Node* arr[], int K) {

    Node* head = NULL;
    for (int i = 0; i < K; i++) {
        head = mergeTwo(head, arr[i]);
    }
    return head;
}
