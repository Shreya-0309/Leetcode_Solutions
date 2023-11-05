class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        int currentWinner = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > currentWinner) {
                currentWinner = arr[i];
                count = 1;
            } 
            else {
                count++;
            }
            if (count == k) {
                return currentWinner;
            }
        }
        return currentWinner;
    }
};
