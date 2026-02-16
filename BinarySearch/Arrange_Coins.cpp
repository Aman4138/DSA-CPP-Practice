class Solution {
public:
    int arrangeCoins(int n) {

        long long low = 1;
        long long high = n;
        long long ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long coins = mid * (mid + 1) / 2;

            if (coins <= n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
