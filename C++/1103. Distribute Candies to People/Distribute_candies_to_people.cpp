class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people, 0);
        int give = 1;
        int index = 0;
        while (candies > 0) {
            v[index % num_people] += min(give, candies);
            candies -= give;
            give++;
            index++;
        }
        return v;
    }
};
