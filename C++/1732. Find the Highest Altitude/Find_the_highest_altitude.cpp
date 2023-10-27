class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        for(int i = 1; i < n; i++){
            gain[i] = gain[i - 1] + gain[i];
        }
        int result = 0;
        for(int i = 0; i < n; i++){
            if(result < gain[i]){
                result = gain[i];
            }
        }
        return result;
    }
};
