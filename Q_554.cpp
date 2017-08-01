class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        
        map<int,int> mymap;
        vector<int> temp;
        
        int a,i,sum,j;
        
        for(i=0;i<wall.size();i++){
        
            temp = wall[i];
            sum = 0;
            for(j=0;j<temp.size()-1;j++){
                sum += temp[
                    j];
                mymap[sum]++;
                //printf("sum  is %d \n",sum);
                
            }
            
        }
        
        a = INT_MIN;
        
        if(mymap.size() == 0)
            return wall.size();
        
        for(map<int,int>::iterator it = mymap.begin();it!=mymap.end();it++){
            if(it->second > a)
                a = it->second;
           // printf("it->secind is %d \n",it->second);
        }

        return wall.size()-a;
    }
};
