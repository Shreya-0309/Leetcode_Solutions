class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i=0;i<candies.size();i++){
            int max=*max_element(candies.begin(), candies.end());
            if((candies[i]+extraCandies)>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false); 
            }
        }
        return result;
    }
};
