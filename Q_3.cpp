class Solution {
public:

    int lengthOfLongestSubstring(string s) {

    if(s.size() == 0)
        return 0;
        
    unordered_map<char,int> mymap;
    
    string str = "",str2 = "";
    
    int i,count,k,old;
    
    int mx = INT_MIN;
    count = 0;
    old = 0;
    
    vector<int> vec;
    
    for(i=0;i<s.size();i++){

            if(mymap.find(s[i]) != mymap.end() && mymap[s[i]]>=old){
            
                if(str.size()>str2.size())
                    str2 = str;

                old = mymap[s[i]]+1;
                
                str = s.substr(mymap[s[i]]+1,i-mymap[s[i]]);   
                
                mymap[s[i]] = i;
                
            
            }
            else{
                mymap[s[i]] = i;
                str = str + s[i];
                count++;
            }
            
    }
        return str.size()>str2.size()?str.size():str2.size();
    }
};
