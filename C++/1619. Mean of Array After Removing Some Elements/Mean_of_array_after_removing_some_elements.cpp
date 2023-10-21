class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size() / 20; 
        int X = size;
        int Y = arr.size() - size - 1;
        vector<int> v(arr.begin() + X, arr.begin() + Y + 1);
        int sum = 0, count = 0;
        for (int i : v) {
            sum += i;
            count++;
        }
        return (double)sum / count;
    }
};
