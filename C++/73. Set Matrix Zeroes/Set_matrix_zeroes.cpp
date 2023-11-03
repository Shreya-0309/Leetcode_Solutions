class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<bool>> flag(matrix.size(), vector<bool>(matrix[0].size(), false));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (flag[i][j] == false && matrix[i][j] == 0) {
                    for (int k = 0; k < matrix[0].size(); k++) {
                        if (matrix[i][k] == 0) continue;
                            matrix[i][k] = 0;
                            flag[i][k] = true;
                        }
                    for (int k = 0; k < matrix.size(); k++) {
                        if (matrix[k][j] == 0) continue;
                        matrix[k][j] = 0;
                        flag[k][j] = true;
                    }
                }
            }
        }
    }
};
