class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count1=0;
        int count2=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L'){
                count1--;
            }
            if(moves[i]=='R'){
                count1++;
            }
            if(moves[i]=='_'){
                count2++;
            }
        }
        return abs(count1)+count2;
    }
};
