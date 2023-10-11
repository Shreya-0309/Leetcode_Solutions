class Solution {
public:
    bool isprime(int num){
        if(num == 1) return false;
        for(int i = 2; i <= sqrt(num); i++) if(num % i == 0) return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int prime = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(isprime(nums[i][i])) prime = max(prime, nums[i][i]);
            if(isprime(nums[i][n - i - 1])) prime = max(prime, nums[i][n - i - 1]);
        }
        return prime;
    }
};
