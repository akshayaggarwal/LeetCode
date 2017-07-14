class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        //sort(nums.begin(),nums.end());
        
        map<int,int> mymap;
        int i,count = 0;
        
        for(i=0;i<nums.size();i++){
            if(mymap.find(nums[i]) != mymap.end()){
                if(mymap[nums[i]] == 2){
                    nums.erase(nums.begin()+i);
                    i--;
                    continue;
                }
                else{
                    mymap[nums[i]]++;
                    count++;
                    }   
            }
            else{
                mymap[nums[i]] = 1;
                count++;
            }
        }
        return count;
    }
};
