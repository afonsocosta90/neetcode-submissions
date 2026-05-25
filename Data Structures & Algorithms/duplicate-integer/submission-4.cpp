class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() < 2) return false;
        std::unordered_set<int> seen;

        for (int num : nums){
            if (seen.count(num)) return true;
            seen.insert(num);
        }

        return false;
    }
};