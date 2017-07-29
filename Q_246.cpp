class Solution {
public:
    bool isStrobogrammatic(string num) {
        
        map<char,char> mymap;
        mymap['0'] = '0';
        mymap['1'] = '1';
        mymap['8'] = '8';
        mymap['6'] = '9';
        mymap['9'] = '6';
        
        int l,r;
        
        for(l=0,r=num.size()-1;l<=r;l++,r--){
        
            if(mymap.find(num[l]) == mymap.end() || mymap[num[l]] != num[r])
                return false;
            
        }
        
        return true;
        
    }
};
