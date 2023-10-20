class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < goal.length(); i++) {
            goal = goal.substr(1, goal.length() - 1) + goal[0];
            if(s == goal) return true;
        }
        return false;
    }
};
