class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v=nums;
        map<int, int> m;
        sort(v.begin(),v.end());
        for(int i=nums.size()-1;i>=0;i--) m[v[i]]=i;
        for(int i=0;i<nums.size();i++) nums[i]=m[nums[i]];
        return nums;
    }
};
