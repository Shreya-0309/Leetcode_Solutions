class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod = nums[0], min_prod = nums[0];
        int overall_max = max_prod;

        for (int i = 1; i < nums.size(); ++i) {
            int tmp_max = max_prod;
            max_prod = max({nums[i], max_prod * nums[i], min_prod * nums[i]});
            min_prod = min({nums[i], tmp_max * nums[i], min_prod * nums[i]});
            overall_max = max(overall_max, max_prod);
        }

        return overall_max;
    }
};
