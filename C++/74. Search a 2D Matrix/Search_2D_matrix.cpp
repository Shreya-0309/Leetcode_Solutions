// Time complexity: O(log(m * n))

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            int midValue = matrix[mid / n][mid % n];
            if(midValue == target) {
                return true;
            } 
            else if (midValue < target) {
                l = mid + 1;
            } 
            else {
                r = mid - 1;
            }
        }
        return false;
    }
};
