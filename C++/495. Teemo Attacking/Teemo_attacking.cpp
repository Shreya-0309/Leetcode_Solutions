class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==1) return duration;
        int time=duration;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]<=timeSeries[i-1]+duration){
                time+=timeSeries[i]-timeSeries[i-1];
            }
            else{
                time+=duration;
            }
        }
        return time;
    }
};
