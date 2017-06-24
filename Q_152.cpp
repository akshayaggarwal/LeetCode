class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int i,front = 1;
        int back = 1;
        
        int ans = INT_MIN;
        
        for(i=0;i<nums.size();i++){
            
            front *= nums[i];
            back *= nums[nums.size()-1-i];
            
            ans = max(front,max(back,ans));
            
            front = front == 0 ? 1 : front;
            back = back == 0 ? 1 : back;
            
        }
        
        return ans;
        
    }
};
