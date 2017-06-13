class Solution {
public:

    map<char,int> mymap;
    bool isValidSudoku(vector<vector<char>>& board) {
        
        int si = board.size();
        vector<char> vec;
        vector<set<char> > vecset(si);

        vector<set<char> > vecset2(si/3);

        
        int i,j,k;
        
        for(i=0;i<si;i++){
            
            if(i==0 || i==3 || i==6){
                for(j=0;j<vecset2.size();j++)
                    vecset2[j].clear();
            }
                
            
            vec = board[i];
            k = 0;
            
            if(vec.size()<si){
                printf("reached1\n");
                return false;
            }
            
            for(j=0;j<vec.size();j++){
                
                if(j == 3 || j == 6)
                    k++;
                    
                if(vec[j] == '.')
                    continue;
                    
                if(mymap.find(vec[j]) != mymap.end()){
                    return false;
                }
            
                else{
                    mymap[vec[j]]=j;
                    if(vecset[j].find(vec[j]) == vecset[j].end())
                        vecset[j].insert(vec[j]);
                    else{
                        return false;
                    }
                    
                    if(vecset2[k].find(vec[j]) == vecset2[k].end())
                        vecset2[k].insert(vec[j]);
                    else
                        return false;
                }
            }
           // vec.clear();
           
            mymap.clear();
        }
        
        return true;
    }
};
