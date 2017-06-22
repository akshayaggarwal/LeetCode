class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
    
        vector<vector<int>> ret;
        
        if(nums.size()<3)
            return ret;
        
        sort(nums.begin(),nums.end());
        
        
    
        int i,target,a,front,back,k = nums.size();

        
        for(i=0;i<nums.size()-1;i++){
            
            target = -nums[i];
            
            front = i+1;
            back = nums.size()-1;
            

            while(front<back){
                
                a = nums[front]+nums[back];
                if(a<target){
                    front++;
                }
                else if(a>target)
                    back--;
                else{
                    vector<int> myvec;
                    myvec.push_back(nums[front]);
                    myvec.push_back(nums[back]);
                    myvec.push_back(nums[i]);

                    ret.push_back(myvec);
                    while(front<back && nums[front]==myvec[0])
                        front++;
                        
                    while(front<back && nums[back]==myvec[1])
                        back--;

                }
            }
            
            while(i<nums.size()&&nums[i]==-target)
                i++;
            i--;
        }
        
        return ret;
    }
};
