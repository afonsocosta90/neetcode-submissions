class Solution {
public:
    bool isAnagram(std::string_view stringA, std::string_view stringB){
        // Return true if both strings are Anagrams
        std::unordered_map<char, int> charCounterA;
        std::unordered_map<char, int> charCounterB;

        for (char c : stringA){
            charCounterA[c]++;
        }

        for (char c : stringB){
            charCounterB[c]++;
        }

        return charCounterA == charCounterB;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) return {};

        vector<vector<string>> output = {};

        for (const string& words : strs){
            bool found = false;

            // Check if this word is an anagram of any existing group
            for (int i = 0; i < output.size(); i++) {
                if (isAnagram(words, output[i][0])) {
                    output[i].push_back(words);
                    found = true;
                    break;
                }
            }

            // If not found, create a new group
            if (!found) {
                output.push_back({words});
            }
        }

        return output;
    }
};
