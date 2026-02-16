class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {

        int n = intervals.size();
        vector<pair<int,int>> start;
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            start.push_back({intervals[i][0], i});
        }

        sort(start.begin(), start.end());

        for (int i = 0; i < n; i++) {
            int end = intervals[i][1];
            int low = 0;
            int high = n - 1;
            int res = -1;

            while (low <= high) {
                int mid = (low + high) / 2;

                if (start[mid].first >= end) {
                    res = start[mid].second;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            ans[i] = res;
        }
        return ans;
    }
};
