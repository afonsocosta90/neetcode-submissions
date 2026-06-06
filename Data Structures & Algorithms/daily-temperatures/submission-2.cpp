class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = static_cast<int>(temperatures.size());
        vector<int> result(n, 0);
        stack<int> stk;  // indices, temps strictly decreasing bottom->top
        for (int i = 0; i < n; ++i) {
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
                int prev = stk.top();
                stk.pop();
                result[prev] = i - prev;
            }
            stk.push(i);
        }
        return result;
    }
};