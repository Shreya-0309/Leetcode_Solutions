class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string result = "";
        for(string s : words){
            int l = 0, r = s.length() - 1;
            while(l < r){
                if(s[l] != s[r]) break;
                l++;
                r--;
            }
            if (l >= r) {
                result = s;
                break; 
            }
        }
        return result;
    }
};
