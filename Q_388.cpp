class Solution {
public:
    int lengthLongestPath(string input) {
        
        int tcount,i,temp,count = 0;
        
        map<int,int> mymap;
        
        mymap[0] = 0;
        
        temp = 0;
        tcount = 0;
        
        for(i=0;i<input.size();i++){
            
            if(input[i] == '.')
            {
                temp++;
                i++;
                while(i<input.size()){
                      if(input[i] == '\n' || input[i] == '\t')
                          break;
                      i++;
                      temp++;
                }

                if(temp>count){
                    printf("here also \n");
                    count = temp;
                }
                
                i--;
                continue;
            }
            
            if(input[i] == '\n'){
                mymap[tcount+1] = temp+1;
                temp++;
                i++;
                
                tcount = 0;
                while(input[i] == '\t'){
                    tcount++;
                    i++;
                }
                
                if(mymap.find(tcount) != mymap.end())
                    temp = mymap[tcount]; 
                //else

                mymap[tcount] = temp;
                
                i--;

                continue;
            }
            
            temp++;
        }
        
        return count;
    }
};
