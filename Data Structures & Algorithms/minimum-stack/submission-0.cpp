class MinStack {
public:
    MinStack() {}

    void push(int val) {
        s.push(val);
        if (mins.empty() || val <= mins.top())
            mins.push(val);
        else
            mins.push(mins.top());
    }

    void pop() {
        s.pop();
        mins.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return mins.top();
    }

private:
    std::stack<int> s;
    std::stack<int> mins;
};