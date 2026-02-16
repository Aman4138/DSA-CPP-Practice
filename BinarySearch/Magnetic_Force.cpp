class Solution {
public:
    bool canPlace(vector<int>& pos, int m, int dist) {

        int count = 1;
        int last = pos[0];

        for (int i = 1; i < pos.size(); i++) {
            if (pos[i] - last >= dist) {
                count++;
                last = pos[i];
            }
        }
        return count >= m;
    }

    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int low = 1;
        int high = position.back() - position[0];
        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canPlace(position, m, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
