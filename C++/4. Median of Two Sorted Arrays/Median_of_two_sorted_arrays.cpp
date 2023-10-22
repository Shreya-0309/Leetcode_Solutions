class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
        int mid = nums3.size() / 2;
        if (nums3.size() % 2 == 0) {
            return (double)(nums3[mid] + nums3[mid - 1]) / 2;
        } 
        else {
            return (double)nums3[mid];
        }
    }
};
