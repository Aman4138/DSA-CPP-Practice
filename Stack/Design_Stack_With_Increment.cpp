#include <bits/stdc++.h>
using namespace std;

class CustomStack {
    vector<int> st;
    int maxSize;

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }

    void push(int x) {
        if (st.size() < maxSize)
            st.push_back(x);
    }

    int pop() {
        if (st.empty()) return -1;
        int val = st.back();
        st.pop_back();
        return val;
    }

    void increment(int k, int val) {
        for (int i = 0; i < min(k, (int)st.size()); i++) {
            st[i] += val;
        }
    }
};
