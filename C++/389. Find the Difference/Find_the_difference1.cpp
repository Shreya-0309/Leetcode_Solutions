class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        for(char c : s) m1[c]++;
        for(char c : t) m2[c]++;
        string s1 = "abcdefghijklmnopqrstuvwxyz";
        for(char c : s1){
            if(m1[c]!=m2[c]) return c;
        }
        return 'a';
    }
};
