class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); // Example [1, 2, 4, 6] -> [48, 24, 12, 8]
        std::vector<int> output(n, 1); // [1, 1, 1, 1]

        //Forward pass: Prefix
        int prefix = 1;
        for (int i = 0; i < n; i++){
            output[i] = prefix; // 1, 1, 2, 8
            prefix *= nums[i]; // 1, 2, 8
        }


        //Backwards pass: Sufix
        int suffix = 1;
        for (int i = n-1; i >= 0; i--){
            output[i] *= suffix;
            suffix *= nums[i];    
        }

        return output;
    }
};
