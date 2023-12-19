class Solution {
public:
    static bool sortOrder(const vector<int>& v1, const vector<int>& v2) {
        return v1[0] < v2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int count = 0;
        sort(intervals.begin(), intervals.end(), sortOrder);
        result.push_back({intervals[0][0], intervals[0][1]});
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] > result[count][1]) {
                result.push_back({intervals[i][0], intervals[i][1]});
                count++;
            }
            else {
                result[count][1] = max(result[count][1], intervals[i][1]);
            }
        }
        return result;
    }
};
