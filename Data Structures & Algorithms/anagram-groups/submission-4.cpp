class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;

        for (const string& word : strs){
            vector<int> frequencyCounter(26, 0);

            // Frequency counter for current word
            for (char c : word){
                frequencyCounter[c - 'a']++;
            }

            // Convert frequency counter to string keyalignas
            string key;
            for (int freq : frequencyCounter){
                key += to_string(freq) + " ";
            }
            
            groups[key].push_back(word);
        }

        vector<vector<string>> output;
        for (auto& [key, group] : groups) {
            output.push_back(group);
        }

        return output;
    }
};
