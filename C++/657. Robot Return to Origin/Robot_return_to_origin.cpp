class Solution {
public:
    bool judgeCircle(string moves) {
        int i1 = 0, i2 = 0;
        for(int i=0;i<moves.length();i++){
            if(moves[i] == 'U') i1++;
            else if(moves[i] == 'D') i1--;
            else if(moves[i] == 'R') i2++;
            else i2--;
        }
        if(i1 == 0 && i2 == 0) return true;
        return false;
    }
};
