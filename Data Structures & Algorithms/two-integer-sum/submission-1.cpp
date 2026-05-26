class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hmap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            auto it = hmap.find(complement);
            if (it != hmap.end()) {
                return {it->second, i};
            }

            hmap[nums[i]] = i;
        }

        return {};
    }
};
