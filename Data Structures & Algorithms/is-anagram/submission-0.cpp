class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> seen_s;
        std::unordered_map<char, int> seen_t;

        for (char c : s){
            seen_s[c] += 1;
        }

        for (char c : t){
            seen_t[c] += 1;
        }

        if (seen_t == seen_s){
            return true;
        }
        else{
            return false;
        }
    }
};
