class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < goal.length(); i++) {
            string g = goal.substr(1, goal.length() - 1);
            g += goal[0];
            if(s == g) return true;
            goal = g;
        }
        return false;
    }
};
