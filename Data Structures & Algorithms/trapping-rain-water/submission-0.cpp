class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = static_cast<int>(height.size()) - 1;
        int leftMax = 0;
        int rightMax = 0;
        int total = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                leftMax = std::max(leftMax, height[left]);
                total += leftMax - height[left];
                ++left;
            } else {
                rightMax = std::max(rightMax, height[right]);
                total += rightMax - height[right];
                --right;
            }
        }

        return total;
    }
};