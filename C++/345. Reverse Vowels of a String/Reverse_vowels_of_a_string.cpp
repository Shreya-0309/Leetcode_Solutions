class Solution {
public:
    string reverseVowels(string s) {
        string s1;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                s1 += s[i]; 
                s[i] = '*';
            }
        }
        j = s1.length() - 1; 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '*') {
                s[i] = s1[j--]; 
            }
        }
        return s;
    }
};
