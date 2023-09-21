class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        for(char i : s){
            if(i == '(' || i == '{' || i == '[') stack.push(i);
            else{
                if(stack.empty() || (stack.top() == '(' && i != ')') || (stack.top() == '{' && i != '}') || (stack.top() == '[' && i != ']')) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
