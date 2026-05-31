class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        string delimiter = "#";

        for (string words : strs){
            result += to_string(words.size()) + delimiter + words;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        char delimiter = '#'; 
        int i = {0};

        while (i < s.size()){
            int j = i;
            string str_word_size = "";

            while(s[j] != delimiter){
                str_word_size += s[j];
                j++;   
            }

            int int_word_size = stoi(str_word_size);

            result.push_back(s.substr(j + 1, int_word_size));

            i = j + 1 + int_word_size;
        }

        return result;
    }
};
