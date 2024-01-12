class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n = s.length() / 2;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(vowels.count(s[i]) > 0){
                sum++;
            }
        }
        for (int i = n; i < 2 * n; i++) {
            if(vowels.count(s[i]) > 0){
                sum--;
            }
        }
        return sum == 0 ? true : false;
    }
};
