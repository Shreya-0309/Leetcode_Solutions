class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> m1, m2;
        int count = 0;
        for(int i = 0;i < s.length(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto i : m1){
            if(i.second > m2[i.first]){
                count += (i.second - m2[i.first]);
            }
        }
        return count;
    }
};
