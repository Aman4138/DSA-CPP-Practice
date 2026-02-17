class MyStack {
public:
    queue<int> q;

    void push(int x) {
        q.push(x);
        int sz = q.size();
        for (int i = 1; i < sz; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
