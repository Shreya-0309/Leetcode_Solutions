class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int sym_count=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int result=0, n=s.size();
            for(int j=0;j<n/2;j++) result+=s[j]-s[n-j-1];
            if(n%2==0 && result==0) sym_count++;
        }
        return sym_count;
    }
};
