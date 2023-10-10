class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i < sqrt(num); i++){
            if(num % i == 0){
                if(num / i != 1){
                    sum += num / i;
                }
                sum += i;
            }
        }
        sum -= num;
        return sum == num ? true : false;
    }
};
