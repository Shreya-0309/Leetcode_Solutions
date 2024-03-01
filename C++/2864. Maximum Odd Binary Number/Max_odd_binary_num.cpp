class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='1') count++;
        }
        for(int i = 0;i < count-1;i++) ans += "1";
        for(int i = 0;i < s.length() - count; i++) ans += "0";
        ans += "1";
        return ans;
    }
};
