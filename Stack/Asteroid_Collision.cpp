class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;

        for (int i = 0; i < ast.size(); i++) {
            int curr = ast[i];
            bool destroyed = false;

            while (!st.empty() && curr < 0 && st.top() > 0) {
                if (st.top() < -curr) {
                    st.pop();
                } else if (st.top() == -curr) {
                    st.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed)
                st.push(curr);
        }

        vector<int> ans(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
