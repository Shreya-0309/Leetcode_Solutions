class Solution {
public:
    int integerBreak(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;
        int rem = n % 3;
        if(rem == 0) return pow(3, n / 3);
        else if(rem == 2) return 2 * pow(3, n / 3);
        else return 4 * pow(3, (n / 3) - 1);
    }
};
