class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i,count=0;
        for(i=0;i<flowerbed.size();){
            if(flowerbed[i]==0){
                if(i+1<flowerbed.size()&&flowerbed[i+1]==1){
                    i+=3;
                    continue;
                }
                count++;
                i+=2;
            }
            else{
                while(i<flowerbed.size()&&flowerbed[i]==1)
                    i++;
                i++;
            }
        }
        
        if(count>=n)
            return true;
        return false;
    }
};
