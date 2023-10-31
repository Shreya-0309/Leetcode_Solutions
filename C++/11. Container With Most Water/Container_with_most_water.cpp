class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, max_water = 0;
        while(i < j) {
            int h = min(height[i], height[j]);
            max_water = max(max_water, h * (j - i));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return max_water;
    }
};
