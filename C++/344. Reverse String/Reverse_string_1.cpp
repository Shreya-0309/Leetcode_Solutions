class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        bool flag=false;
        int r=0;
        for(int i=s.length()-1;i>=0;i--){
            if(!flag){
                if(s[i]!=' '){
                    r=i;
                    flag=true;
                }
            }
            else{
                if(s[i]==' '){
                    ans += s.substr(i + 1, r - i) + " ";
                    flag=false;
                }
            }
        }
        if (flag) ans += s.substr(0, r + 1) + " ";
        if (!ans.empty()) ans.pop_back();
        return ans;
    }
};
