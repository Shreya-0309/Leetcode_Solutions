class Solution {
public:
    bool checkString(string s) {
        for(int i = s.length() - 1; i >= 1; i--){
            if(s[i - 1] == 'b' && s[i] == 'a') return false;
        }
        return true;
    }
};
