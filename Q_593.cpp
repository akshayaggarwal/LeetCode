class Solution {
public:

    int calc(vector<int>& p1, vector<int>& p2)
    {
        int a = pow((p1[0] - p2[0]),2) + pow((p1[1] - p2[1]),2);
       // printf("a is %d\n",a);
        return a;
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        std::map<int,int> mymap;
        
        mymap[calc(p1,p2)]++;
        mymap[calc(p1,p3)]++;
        mymap[calc(p1,p4)]++;
        mymap[calc(p3,p2)]++;
        mymap[calc(p4,p2)]++;
        mymap[calc(p4,p3)]++;
        
        if(mymap.size() == 2){
            for(std::map<int,int>::iterator it = mymap.begin();it != mymap.end();it++)
                {
                    if(it->second!=4 && it->second!=2)
                        return false;
                    //a1 = it->first;     
                }
            return true;
        }
        else
            return false;
        
    }
};
