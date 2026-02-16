class Solution {
public:
    int findLHS(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int ans = 0;

        for (auto it : mp) {
            int num = it.first;
            if (mp.find(num + 1) != mp.end()) {
                ans = max(ans, it.second + mp[num + 1]);
            }
        }
        return ans;
    }
};
