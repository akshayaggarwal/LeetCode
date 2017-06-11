class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        
        int count1 = -1,last1;
        int count2 = -1,last2;
        
        string str;
        
        int i;
        
        for(i=0;i<words.size();i++){
            
            str = words[i];
            
            if(str == word1 && (count1==-1 || count2 == -1)){
                count1 = i;
            
                last1 = i;
            }
            
            if(str == word2 && (count1==-1 || count2 == -1)){
                count2 = i;
                last2 = i;
        }
                
            if(count1 != -1 && count2 != -1){
                
                if(str == word1){
                    if(abs(i-count2)<abs(count1-count2)){
                        count1 = i;
                    }
                
                if(abs(last2-i)<abs(count2-count1)){
                    count2 = last2;
                    count1 = i;
                }
                
                    last1 = i;
                }

                if(str == word2){
                
                if(abs(i-count1)<abs(count1-count2)){
                        count2 = i;
                    }
                if(abs(last1-i)<abs(count2-count1)){
                    count1 = last1;
                    count2 = i;
                }
            
                last2 = i;    
                }
            }
        }
        return abs(count1-count2);
    }
};
