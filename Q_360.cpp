class Solution {
public:
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {
      
      vector <int>vec;
      multiset<int> ret;
      int i,x;
      
      for(i=0;i<nums.size();i++){
          x = (b*nums[i]) + c;
          x = x + (a*(nums[i]*nums[i]));
          ret.insert(x);
      }
      
        for(multiset<int>::iterator it = ret.begin();it!=ret.end();it++)
            vec.push_back(*it);
            
        return vec;
    }
};
