class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int left = 0;
        int right = static_cast<int>(heights.size()) - 1;

        while (left < right){
            int currentArea = std::min(heights[left], heights[right]) * (right - left);
            maxWater = std::max(maxWater, currentArea);

            if (heights[left] < heights[right]) left++;
            else right--;
        }
        return maxWater;
    }
};




