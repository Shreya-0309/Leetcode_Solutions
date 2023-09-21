class Solution {
public:
    int count_ones(int n){
        int count = 0;
        for(int i = 31; i >= 0; i--){
            int k = n >> i;
            if(k & 1) count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i = 0; i <= n; i++){
            v.push_back(count_ones(i));
        }
        return v;
    }
};
