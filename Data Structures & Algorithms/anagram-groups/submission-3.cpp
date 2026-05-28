class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        
        for (const string& word : strs) {
            // Create character count signature
            vector<int> count(26, 0);
            for (char c : word) {
                count[c - 'a']++;
            }
            
            // Convert count to string key (can't use vector as key directly)
            string key;
            for (int cnt : count) {
                key += to_string(cnt) + " ";
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