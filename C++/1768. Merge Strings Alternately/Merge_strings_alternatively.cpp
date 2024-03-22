class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        while (i < word1.length() && j < word2.length()){
            merged += word1[i++];
            merged += word2[j++];
        }
        merged += word1.substr(i, word1.length() - 1);
        merged += word2.substr(j, word2.length() - 1);
        return merged;
    }
};
