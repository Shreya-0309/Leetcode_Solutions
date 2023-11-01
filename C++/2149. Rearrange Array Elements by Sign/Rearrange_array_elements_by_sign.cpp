class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans, pos, neg;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                pos.push_back(nums[i]);
            } 
            else {
                neg.push_back(nums[i]);
            }
        }

        int maxLength = max(pos.size(), neg.size());

        for (int i = 0; i < maxLength; i++) {
            if (i < pos.size()) {
                ans.push_back(pos[i]);
            }
            if (i < neg.size()) {
                ans.push_back(neg[i]);
            }
        }

        return ans;
    }
};
