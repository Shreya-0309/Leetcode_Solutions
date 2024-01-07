// Time complexity: O(m * log(n))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target <= matrix[i][n-1]){
                int l = 0, r = n - 1;
                while(l <= r) {
                    int mid = (l + r)/ 2;
                    if(matrix[i][mid] == target){
                        return true;
                    }
                    else if(matrix[i][mid] > target) {
                        r = mid - 1;
                    }
                    else {
                        l = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};
