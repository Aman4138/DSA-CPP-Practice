void solve(stack<int>& st, int k) {
    if (k == 1) {
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();
    solve(st, k - 1);
    st.push(temp);
}

void deleteMid(stack<int>& st, int size) {
    int k = (size / 2) + 1;
    solve(st, k);
}
