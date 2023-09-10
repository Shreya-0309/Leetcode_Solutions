class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size()==1){
            arr[0]=-1;
            return arr;
        }
        for(int i=0;i<arr.size()-1;i++){
            arr[i]=*max_element(arr.begin()+i+1,arr.end());
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};
