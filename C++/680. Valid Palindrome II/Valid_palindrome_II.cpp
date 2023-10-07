class Solution {
public:
    bool validPalindrome(string s) {
        return isPalindrome(s, 0, s.length() - 1, false);
    }
private:
    bool isPalindrome(const string& s, int l, int r, bool deleted) {
        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } 
            else {
                if (deleted) return false;  
                return isPalindrome(s, l + 1, r, true) || isPalindrome(s, l, r - 1, true);
            }
        }
        return true; 
    }
};
