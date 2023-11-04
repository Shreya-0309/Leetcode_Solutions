class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int max_time = 0;
        for (int ant : left) max_time = max(max_time, ant);
        for (int ant : right) max_time = max(max_time, n - ant);
        return max_time;
    }
};
