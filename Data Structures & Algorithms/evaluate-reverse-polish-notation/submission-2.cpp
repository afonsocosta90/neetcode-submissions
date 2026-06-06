class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (auto& tok : tokens) {
            if (tok.size() > 1 || isdigit(tok[0])) {   // operand (incl. negatives like "-12")
                s.push(stoi(tok));
            } else {
                int y = s.top(); s.pop();
                int x = s.top(); s.pop();
                switch (tok[0]) {
                    case '+': x += y; break;
                    case '-': x -= y; break;
                    case '*': x *= y; break;
                    case '/': x /= y; break;
                }
                s.push(x);
            }
        }
        return s.top();
    }
};