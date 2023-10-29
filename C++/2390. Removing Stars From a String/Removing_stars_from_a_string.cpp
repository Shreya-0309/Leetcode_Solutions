class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '*') {
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        }
        string result = "";
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
