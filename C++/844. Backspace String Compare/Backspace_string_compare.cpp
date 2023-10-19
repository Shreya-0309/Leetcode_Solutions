class Solution {
private:
    string backspaceString(string a) {
        for(int i = 0; i < a.length(); i++){
            if(a[i] == '#'){
                if(i != 0){
                    a.erase(i - 1, 2);
                    i -= 2;
                }
                else{
                    a.erase(i, 1);
                    i--;
                }
            }
        }
        return a;
    } 
public:
    bool backspaceCompare(string s, string t) {
        s = backspaceString(s);
        t = backspaceString(t);
        if(s == t) return true;
        return false;
    }
};
