class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        map<int,int> mymap;
        int i,j,k1,k2,maxn,minn;
        
        int num1,num2,num3,num4;
        
        map<int,int>::iterator it1,it2;
        
        for(i=0;i<arrays.size();i++){
            
            maxn = INT_MIN;
            minn = INT_MAX;
            
            for(j=0;j<arrays[i].size();j++){
                
                if(arrays[i][j]<minn){
                    minn = arrays[i][j];
                    k1 = j;
                }
                
                if(arrays[i][j]>maxn){
                    maxn = arrays[i][j];
                    k2 = j;
                }
                    
            }
            
            if(mymap.find(maxn) != mymap.end() && mymap.find(minn) != mymap.end() ){
                if(mymap[maxn] == mymap[minn])
                    mymap[minn] = i;
            }
            if(mymap.find(maxn) == mymap.end()){
                mymap[maxn] = i;
            }
            if(mymap.find(minn) == mymap.end()){
                mymap[minn] = i;
            }
            
            it1 = mymap.begin();
            it2 = mymap.end();
            it2--;
            
            if(it1->second == it2->second && it1->first != i){
                if(it1->first == minn){
                    it1->second = i;
                }
                else if(it2->first == maxn){
                    it2->second = i;
                }
            }
            
        }
        
        it1 = mymap.begin();
        it2 = mymap.end();
        
        it2--;
        
        j = 0;
        
        while(it1->first!=it2->first){
            
            if(it1->second != it2->second)
                return it2->first-it1->first;
            else{
                num2 = it2->first;
                num1 = it1->first;
                it1++;
                it2--;
                num3 = it1->first;
                num4 = it2->first;
                
                if(num2-num3 > num4-num1){
                      it2++;
                 //   continue;
                }
                else{
                    it1--;
                }
            }

        }

        return 0;
    }
    
    
};
