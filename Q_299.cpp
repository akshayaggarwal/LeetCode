class Solution {
public:
    string getHint(string secret, string guess) {
        
        map<char,int> mymap;
        string ret = "";//,ret2 = "";
        int i,bull,cow;
        bull = 0;
        cow = 0;
        
        for(i=0;i<secret.size();i++){
            mymap[secret[i]]++;
        }
        
       
        
        for(i=0;i<guess.size();i++){
            
            if(guess[i] == secret[i]){
                bull++;
                if(mymap[guess[i]]>1)
                    mymap[guess[i]]--;
                else
                    mymap.erase(guess[i]);
                guess.erase(i,1);
                secret.erase(i,1);
                i--;
            }
            
        }
        
        
        for(i=0;i<guess.size();i++){
            if(mymap.find(guess[i]) != mymap.end()){
                    cow++;
                    if(mymap[guess[i]]>1)
                        mymap[guess[i]]--;
                    else
                        mymap.erase(guess[i]);
                }
        }
        
        
        ret = to_string(bull) + 'A' + to_string(cow) + 'B';
        
        return ret;
        
    }
};
