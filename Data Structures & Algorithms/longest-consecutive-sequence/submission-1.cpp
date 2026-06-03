class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int maxLength = 0;

        for (int num : numSet){
            if (numSet.count(num - 1)) continue;
            
            int currentNum = num;
            int length = 1;
            
            while (numSet.count(currentNum + 1)){
                length++;
                currentNum++;
            }

            maxLength = std::max(maxLength, length);
        }
        return maxLength;
    }
};
