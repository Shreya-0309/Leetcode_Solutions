class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> m1, m2;
        for(char c : s) m1[c]++;
        for(char c : t) m2[c]++;
        for(char c : s) if(m1[c] != m2[c]) return false;
        return true;
    }
};
