class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n-1; i++){
            int seen = nums[i];
            for (int j = i+1; j < n; j++){
                if (nums[j] == seen) return true;
            }
        }
        return false;
    }
};