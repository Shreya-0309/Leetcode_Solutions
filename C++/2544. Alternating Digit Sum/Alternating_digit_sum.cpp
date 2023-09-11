class Solution {
public:
    int alternateDigitSum(int n) {
        int rev_num=0;
        while(n>0){
            rev_num=(rev_num*10)+(n%10);
            n=n/10;
        }
        n=0;
        int sum=0;
        while(rev_num>0){
            if(n==0){
                sum+=rev_num%10;
                rev_num=rev_num/10;
                n=1;
            }
            else{
                sum-=rev_num%10;
                rev_num=rev_num/10;
                n=0;
            }
        }
        return sum;
    }
};
