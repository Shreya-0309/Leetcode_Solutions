class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for (char ch : s) {
            if (!result.empty() && ch == result.back()) {
                result.pop_back();
            } 
            else {
                result.push_back(ch);
            }
        }
        return result;
    }
};
