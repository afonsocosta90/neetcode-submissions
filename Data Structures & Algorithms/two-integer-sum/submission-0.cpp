class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hmap;

        for (int i = 0; i < nums.size(); i++){
            
            // Compute complement
            int complement = target - nums[i];
            
            //Check if complement exists in map
            if (hmap.find(complement) != hmap.end()){
                return {hmap[complement], i};
            }

            // If previous operation is false, add index and complement to Hmap
            hmap[nums[i]] = i; 
        }

        return {};

    }
};
