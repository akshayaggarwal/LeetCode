// Need to improve complexity

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     
     vector<int> vec;
     int i,j,max,val;
     
     std::map<int,int> mymap;
     
     for(i=0;i<nums.size();i++)
     {
         mymap[nums[i]]++;
     }
     
     i = 0;
     
     while(i<k){
        
        
         max = INT_MIN;
         j = 0;
         i++;
        
        for(std::map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
         
         if(it->second >= max){
             
            max = it->second;
            val = it->first;
            }
            j++;
         
     }
        vec.push_back(val);
        mymap.erase(val);
     } 
        return vec;
    }
};
