class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int maxCounter = 0;

        for (int num : numSet){
            if (numSet.count(num - 1)) continue;
            
            int counter = 1;
            
            while (numSet.count(num + 1)){
                counter++;
                num++;
            }

            maxCounter = std::max(maxCounter, counter);
        }
        return maxCounter;
    }
};
