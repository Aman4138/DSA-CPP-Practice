class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {

            int h = min(height[left], height[right]);
            int w = right - left;
            int area = h * w;

            if (area > maxWater)
                maxWater = area;

            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxWater;
    }
};
