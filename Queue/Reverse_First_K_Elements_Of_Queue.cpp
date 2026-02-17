#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {

    stack<int> st;

    // push first k elements into stack
    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    // pop from stack and push back to queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // move remaining elements to back
    int rem = q.size() - k;
    while (rem--) {
        q.push(q.front());
        q.pop();
    }

    return q;
}
