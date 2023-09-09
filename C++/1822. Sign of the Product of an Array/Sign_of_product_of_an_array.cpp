class Solution {
public:
    int sigFunc(int x){
        if(x>0){
            return 1;
        }
        else if(x<0){
            return -1;
        }
        else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums){
        int product=1;
        for(int i=0;i<nums.size();i++){
            product*=sigFunc(nums[i]);
        }
        return product;
    }
};
