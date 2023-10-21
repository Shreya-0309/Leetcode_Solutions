class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> v(2, 0);
        for(int i = 0; i < mat.size(); i++){
            int sum = 0;
            for(int j =  0; j < mat[i].size(); j++) if(mat[i][j]==1) sum++;
            if(sum > v[1]) {
                v[0] = i;
                v[1] = sum;
            }
        }
        return v;
    }
};
