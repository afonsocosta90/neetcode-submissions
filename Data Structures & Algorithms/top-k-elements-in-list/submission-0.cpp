class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencyCounter;

        for (int num : nums){
            frequencyCounter[num]++;
        }

        vector<vector<int>> buckets(nums.size()+ 1 );

        for (auto element : frequencyCounter){
            buckets[element.second].push_back(element.first);
        }

        vector<int> output;
        for (int i = buckets.size() -1; output.size() < k ; i--){
            for (int num : buckets[i]){
                output.push_back(num);
            }
        }

        return output;
    }
};
