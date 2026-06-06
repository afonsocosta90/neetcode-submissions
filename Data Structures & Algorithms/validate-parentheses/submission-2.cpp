class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> match{
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for (char c : s) {
            if (!match.count(c)) {        // not a closer => it's an opener
                stack.push(c);
            } else {
                if (stack.empty() || stack.top() != match[c]) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};