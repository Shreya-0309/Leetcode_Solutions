class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0, sum2=0;
        int c1=0, c2=0;
        
        for(int i:nums1){
            sum1 += i;
            c1 += (i==0);
        }
        for(int i:nums2){
            sum2 += i;
            c2 += (i==0);
        }
        
        if(c1==0 && sum1<sum2+c2) return -1;
        if(c2==0 && sum2<sum1+c1) return -1;
        
        return max(sum1+c1,sum2+c2);
    }
};
