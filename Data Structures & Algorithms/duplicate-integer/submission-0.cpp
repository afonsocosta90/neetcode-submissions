class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        int duplicate_contender = nums[0];
        int n = std::size(nums);

        for (int i = 1; i < n; i++){
            if (nums[i] == duplicate_contender){
                return true;
            }
            duplicate_contender = nums[i];
        }

        return false;
    }
};