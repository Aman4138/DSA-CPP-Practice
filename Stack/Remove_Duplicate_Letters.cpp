class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> freq(26, 0);
        vector<bool> used(26, false);
        stack<char> st;

        for (char c : s)
            freq[c - 'a']++;

        for (char c : s) {
            freq[c - 'a']--;

            if (used[c - 'a'])
                continue;

            while (!st.empty() && st.top() > c && freq[st.top() - 'a'] > 0) {
                used[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(c);
            used[c - 'a'] = true;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
