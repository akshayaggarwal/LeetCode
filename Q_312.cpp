class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
        int n,len,left,right,k;
        n = nums.size();
        
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        
        vector<vector<int>> myvec(nums.size(),vector<int>(nums.size(),0));
                                  
        for(len = 1;len<=n;len++){
            
            for(left = 1;left<= n-len+1;left++){
                right = left+len-1;
                for(k=left;k<=right;k++){
                    myvec[left][right] = max(myvec[left][right],nums[left-1]*nums[k]*nums[right+1] + myvec[left][k-1] + myvec[k+1][right]);
                }
            }
        }
     
    return myvec[1][n];                               
        
    }
};
