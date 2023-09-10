class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int l=0;
        int r=colors.size()-1;
        int m1=0;
        int m2=0;
        while(l<=r){
            if(colors[l]!=colors[r]){
                m1=abs(l-r);
                break;
            }
            l++;
        }
        l=0;
        r=colors.size()-1;
        while(l<=r){
            if(colors[l]!=colors[r]){
                m2=abs(l-r);
                break;
            }
            r--;
        }
        return max(m1,m2);
    }
};
