class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int h,j,i,diff;
        
        diff = INT_MIN;
        
        for(i=0,j=height.size()-1;i<j;){
            
            h = min(height[i],height[j]);
            diff = max(diff,h*(j-i));
            
            //hi = height[i];
            //hj = height[j];
            
            while(height[i]<=h && i<j) 
                i++;
                
            while(height[j]<=h && j>i)
                j--;
            
        }
        
        return diff;
        
    }
};
