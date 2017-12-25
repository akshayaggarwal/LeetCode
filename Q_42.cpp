class Solution {
public:
    int trap(vector<int>& height) {
        int l,r,level=0,lower=0,retval=0;
        l=0,r=height.size()-1;
        while(l<r){
            lower=height[height[l] < height[r] ? l++ : r--];
            level=max(level,lower);
            retval+=level-lower;
        }
        return retval;
    }
};
