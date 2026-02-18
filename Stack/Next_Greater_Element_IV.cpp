#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st1, st2;

        for (int i = 0; i < n; i++) {
            while (!st2.empty() && nums[i] > nums[st2.top()]) {
                ans[st2.top()] = nums[i];
                st2.pop();
            }
            vector<int> temp;
            while (!st1.empty() && nums[i] > nums[st1.top()]) {
                temp.push_back(st1.top());
                st1.pop();
            }
            for (int idx : temp)
                st2.push(idx);

            st1.push(i);
        }
        return ans;
    }
};
