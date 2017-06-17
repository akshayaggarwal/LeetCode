class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
     
     int i,a;
     int j;// = 0;
     
     for(j=0,i=0;i<abbr.size(),j<word.size();i++,j++)
     {
        // printf("i is %d\n",i);
         if(abbr[i]>='1'&&abbr[i]<='9'){
             a = 0;
             
             while(i<abbr.size() && abbr[i]>='0' && abbr[i]<='9'){
                 a = a*10 + (abbr[i]-48);
                 i++;
             }
          //  printf("a is %d\n",a);
            if(a>(word.size()-j))
                return false;
            
            for(int k = 0;k<a && j<word.size();k++,j++);
            
            //printf("word[j] is %c\n",word[j]);
            
            
            
            if(j<word.size() && i<abbr.size()){
              //  printf("ohoh\n");
                if(word[j] != abbr[i]){
                // printf("here\n");
                    return false;
                }
            }
            else if(j>=word.size() && i<abbr.size())
                return false;
            else if(j<word.size() && i>=abbr.size())
                return false;
            //else
              //  return false;
         }
         else{
             if(abbr[i]!=word[j]){
              //printf("here\n");
                return false;
             }
         }
            
     }
     
    // printf("i is %d \n",i);
    // printf("j is %d \n",j);
     
     if(i<abbr.size() || j<word.size()){
      //printf("here\n");
      
        return false;
     }
        
    return true;
        
    }
};
