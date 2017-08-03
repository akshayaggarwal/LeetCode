class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        map<int,string> mymap;
        int digit,i,j,a;
        
        mymap[0] = "";
        mymap[1] = "";
        mymap[2] = "abc";
        mymap[3] = "def";
        mymap[4] = "ghi";
        mymap[5] = "jkl";
        mymap[6] = "mno";
        mymap[7] = "pqrs";
        mymap[8] = "tuv";
        mymap[9] = "wxyz";
        
        string substr;
        vector<string> ret;
        
        if(digits.size() == 0)
            return ret;
        
        ret.push_back("");
        
        
        for(a=0;a<digits.size();a++){
        
            //printf("reached1\n");
            digit = digits[a] - '0';
            if(digit<0 || digit>9)
                return ret;
            //printf("reached2\n");
            substr = mymap[digit];
            vector<string> temp;
            
            if(substr == "")
                continue;
            
            for(i=0;i<substr.size();i++){
                for(j=0;j<ret.size();j++){
                    temp.push_back(ret[j] + substr[i]);
              //      cout<<ret[j] + substr[i]<<endl;
                }
            }
            
            ret.swap(temp);
            
        }
    
        return ret;
        
    }
};
