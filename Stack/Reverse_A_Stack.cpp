void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(temp);
}

void reverseStack(stack<int>& st) {
    if (st.empty())
        return;

    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, temp);
}
