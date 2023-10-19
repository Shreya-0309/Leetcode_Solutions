class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 1; i < word.length(); i++) if(isupper(word[i])) count++;
        if(count == 0) return true;
        if(count == word.length() - 1 && isupper(word[0])) return true;
        return false;
    }
};
