class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i,j,earliest,n=temperatures.size();
        vector<int> tempindex(101,INT_MAX);
        vector<int> ret(n,0);
        for(i=n-1;i>=0;i--){
            earliest=INT_MAX;
            for(j=temperatures[i]+1;j<=100;j++){
                earliest=min(earliest,tempindex[j]);
            }
            if(earliest!=INT_MAX)
                ret[i]=earliest-i;
            tempindex[temperatures[i]]=i;
        }
        return ret;
    }
};
