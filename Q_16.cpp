class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        if(nums.size()<3)
            return 0;
        
        int diff,front,back,i,tar;
        
        diff = INT_MAX;
        sort(nums.begin(),nums.end());
        int stor;
       
        for(i=0;i<nums.size()-2;i++){

            front = i+1;
            back = nums.size()-1;
            
            tar = nums[i];
            
            while(front<back){
                
                int temp = nums[front] + nums[back] + tar;
                
                //printf("temp is %d \n ",temp);
                //printf("target is %d \n ",target);
                //printf("diff is %d \n ", abs(target - temp));
                
                if(target == temp)
                    return target;
                else if(abs(target - temp) < diff){
                    diff = abs(target - temp);
                    stor = temp;
                }
                if(temp < target)
                    front++;
                else
                    back--;

            }
        
        }
        
        return stor;
        
    }
};
