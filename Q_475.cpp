class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        if(heaters.size()==0 || houses.size() == 0)
            return 0;
            
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        
        int i,r=INT_MIN;
        
        int index = 0;
        
        for(i=0;i<houses.size();i++){
            
            while(index+1<heaters.size() && abs(heaters[index]-houses[i]) >= abs(heaters[index+1]-houses[i]))
                index++;
                
            r = max(r,abs(heaters[index]-houses[i]));
            
        }
        
        return r;
    }
};
