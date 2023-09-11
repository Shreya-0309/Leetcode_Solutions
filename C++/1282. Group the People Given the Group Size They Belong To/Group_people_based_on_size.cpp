class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> v;
        int max=*max_element(groupSizes.begin(),groupSizes.end());
        for(int i=1;i<=max;i++) {
            vector<int> v1;
            for(int j=0;j<groupSizes.size();j++) {
                if(groupSizes[j]==i) {
                    if(v1.size()>=i) {
                        v.push_back(v1);
                        v1.clear();
                    }
                    v1.push_back(j);
                }
            }
            if(v1.size())
            v.push_back(v1);
        }
        return v;
    }
};
