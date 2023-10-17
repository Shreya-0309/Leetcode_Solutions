class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
            if(m[s[i]]==2) return s[i];
        }
        return 'a';
    }
};
