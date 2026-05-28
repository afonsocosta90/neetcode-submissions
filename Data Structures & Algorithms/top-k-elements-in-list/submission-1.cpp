class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencyCounter;
        int n = nums.size();

        for (int num : nums){
            frequencyCounter[num]++;
        }

        vector<vector<int>> buckets(n + 1); // [1, 2, 3] => [x, x, x, x]

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
